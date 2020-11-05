const axios = require("axios");
const cheerio = require("cheerio");
const fs = require("fs");

const sitealvo = "https://answers.travian.pt/index.php?aid=190#go2answer";

const campocerealdados = async () => {
    try {
        const res = await axios.get(sitealvo);
        return res.data;
    } catch (error) {
        console.log("Deu pau ao extrair os dados: " + error);
    }
};

const listaDadosCampoCereal = async () => {
    try {
        const html = await campocerealdados();
        const $ = cheerio.load(html);
        let i;
        const dados = {
            niveis: [],
            madeiras: [],
            barros: [],
            ferros: [],
            cereals: [],
        };
        for (i = 0; i < 20; i++) {
            const nivel = $(
                `#contentRight > div.result > div.answer_result > table > tbody > tr:nth-child(${
                    i + 3
                }) > td:nth-child(1) > strong`,
            ).text();
            dados.niveis.push(nivel);

            const madeira = $(
                `#contentRight > div.result > div.answer_result > table > tbody > tr:nth-child(${
                    i + 3
                }) > td:nth-child(2)`,
            ).text();
            dados.madeiras.push(madeira);

            const barro = $(
                `#contentRight > div.result > div.answer_result > table > tbody > tr:nth-child(${
                    i + 3
                }) > td:nth-child(3)`,
            ).text();
            dados.barros.push(barro);

            const ferro = $(
                `#contentRight > div.result > div.answer_result > table > tbody > tr:nth-child(${
                    i + 3
                }) > td:nth-child(4)`,
            ).text();
            dados.ferros.push(ferro);

            const cereal = $(
                `#contentRight > div.result > div.answer_result > table > tbody > tr:nth-child(${
                    i + 3
                }) > td:nth-child(5)`,
            ).text();
            dados.cereals.push(cereal);
        }
        return dados;
        //   let nivel =
        //   let lumber =
        //   let clay
        //   let iron
        //   let crop
    } catch (error) {
        console.log("Deu merda aq");
    }
};

const valorCeleiro = [];
