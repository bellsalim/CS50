function res(res)
		{
			switch (res) {
				case 'f1':
					document.getElementById("status1").innerText = "Elizabeth Bennet vive com sua mãe, pai e irmãs no campo, na Inglaterra. Por ser a filha mais velha, ela enfrenta uma crescente pressão de seus pais para se casar. Quando Elizabeth é apresentada ao belo e rico Darcy, faíscas voam. Embora haja uma química óbvia entre os dois, a natureza excessivamente reservada de Darcy ameaça a relação.";
					break;
				case 'f2':
					document.getElementById("status2").innerText =  "Stella Grant (Haley Lu Richardson) tem quase dezessete anos de idade, vive conectada ao seu laptop e ama seus melhores amigos. Mas ao contrário da maioria das adolescentes, ela passa grande parte do seu tempo vivendo em um hospital como paciente com fibrose cística. Sua vida é cheia de rotinas, limites e autocontrole – tudo isso é testado quando ela encontra um paciente incrivelmente charmoso chamado Will Newman (Cole Sprouse)."
						"Há um flerte instantâneo, embora as restrições determinem que eles devem manter uma distância segura. À medida que a conexão se intensifica, aumenta a tentação de jogar as regras pela janela e abraçar essa atração. Para complicar ainda mais, Will desenvolve uma rebelião potencialmente perigosa contra seu tratamento médico. Stella gradualmente inspira Will a viver a vida ao máximo, mas ela poderá salvar a pessoa que ama mesmo quando um único toque ultrapassa os limites?"

					break;
				case 'f3':
					document.getElementById("status3").innerText =  "Will (Sam Claflin) é um jovem rico e bem-sucedido, até sofrer um grave acidente que o deixa preso a uma cadeira de rodas. Profundamente depressivo, sua família contrata Louisa (Emilia Clarke) para fazer companhia a ele. Ela sempre levou uma vida modesta, com dificuldades financeiras e problemas no trabalho, mas está disposta a provar para Will que ainda existem razões para viver."
					break;
				case 's1':
					document.getElementById("status4").innerText =  "A série acompanha a história de amor de Connell e Marianne. Ele é a estrela do time de futebol do colégio, ela é a garota nerd e sem amigos. Os dois acabam se envolvendo, mas ele tem vergonha de assumi-la. No ano seguinte, já na faculdade, eles se encontram em situações opostas: Marianne é adorada e popular, enquanto Connell fica à margem, tímido e inseguro. A série é baseada no livro homônimo de Sally Rooney."
				case 's2':
					document.getElementById("status5").innerText =  "A série é uma antologia que reúne oito episódios inspirados em histórias reais enviadas pelos leitores da popular coluna “Modern Love”, do jornal “The New York Times”. Entre as histórias, estão a da jovem Maggie, que vive sozinha em Nova York, mas sempre conta com a ajuda do porteiro Guzmin; a de Lexi, que tenta lidar com seu transtorno de bipolaridade; e a de Tobin e Andy, um casal tentando adotar uma criança."
					break;
				case 's3':
					document.getElementById("status6").innerText =  "A série é centrada nos anos de reinado de Henrique VIII, que governou a Inglaterra durante quase 40 anos. Enquanto ainda tenta alcançar o trono, ele se distancia da esposa, Catarina de Aragão, e se apaixona pela dama de companhia Ana Bolena. Com o auxílio do Cardeal Wolsey, Henrique chega ao poder. Agora, ele precisa lidar com as intrigas políticas da corte e com os conflitos da Inglaterra com outros países."
					break;
				case 'a1':
					document.getElementById("status7").innerText =  "Na história, acompanhamos um clube de literatura formado por algumas garotas. Certo dia, em busca de deixar o clima mais descontraído, uma das garotas pergunta 'o que vocês querem fazer antes de morrer?'. Outra delas deixa escapar apenas a palavra 'quero fazer sexo'. Apesar de não saberem, essa única palavra mudaria o rumo da suas vidas por uma jornada de descoberta cercada de sentimentos bons e ruins em direção à vida adulta."
				case 'a2':
					document.getElementById("status8").innerText =  "As quintuplas da família Nakano são bem diferentes entre si, exceto por um detalhes. As 5 são péssimas nos estudos e, por isso, Uesugi é contratado como professor particular. Agora ele terá que conquistar a confiança das meninas e faze-las estudar caso queira manter o emprego que tanto precisa."
					break;
				case 'a3':
					document.getElementById("status9").innerText =  "Kaguya Shinomiya e Miyuki Shirogane são dois gênios que estão no topo do conselho estudantil de sua prestigiada academia, tornando-os a elite entre as elites. Mas é solitário no topo e cada um se apaixonou pelo outro. Há apenas um grande problema no caminho da felicidade amorosa – ambos são orgulhosos demais para serem os primeiros a confessar seus sentimentos românticos e, assim, se tornarem o “perdedor” na competição do amor! E assim começa seus planos diários para forçar o outro a confessar primeiro!"
			}
		}
		function limpa(limpa) {
			document.bgColor = "white";
			document.fgColor = "black";
			switch (limpa) {
				case 'f1':
					document.getElementById("status1").innerText = "";
					break;
				case 'f2':
					document.getElementById("status2").innerText = "";
					break;
				case 'f3':
					document.getElementById("status3").innerText = "";
					break;
				case 's1':
					document.getElementById("status4").innerText = "";
				case 's2':
					document.getElementById("status5").innerText = "";
					break;
				case 's3':
					document.getElementById("status6").innerText = "";
					break;
				case 'a1':
					document.getElementById("status7").innerText = "";
				case 'a2':
				    document.getElementById("status8").innerText = "";
					break;
				case 'a3':
					document.getElementById("status9").innerText = "";
			}
		}
		

			function validar(formDados)
{
	var erro = true;
	if (formDados.valor.value == "")
	{
		
		document.getElementById("valor").style.backgroundColor = "#ffe5e5";
		formDados.valor.focus();
		erro = false;
		
	}
	var erro = true;
	if (formDados.nome.value == "")
	{
		
		document.getElementById("nome").style.backgroundColor = "#ffe5e5";
		formDados.nome.focus();
		erro = false;
		
	}

	if (formDados.safe.value == "")
	{
		
		document.getElementById("safe").style.backgroundColor = "#ffe5e5";
		formDados.safe.focus();
		erro = false;
		
	}
	var erro = true;
	if (formDados.data.value == "")
	{

		document.getElementById("data").style.backgroundColor = "#ffe5e5";
		formDados.data.focus();
		erro = false;
		
	}

	if (formDados.idade.value == "")
	{
		
		document.getElementById("idade").style.backgroundColor = "#ffe5e5";
		formDados.idade.focus();
		erro = false;
		
	}

	if (formDados.email.value == "")
	{
		
		document.getElementById("email").style.backgroundColor = "#ffe5e5";
		formDados.email.focus();
		erro = false;
		
	}

	if (formDados.senha.value == "")
	{
		
		document.getElementById("senha").style.backgroundColor = "#ffe5e5";
		formDados.senha.focus();
		erro = false;
		
	}

	if (formDados.data.value == "")
	{
		
		document.getElementById("data").style.backgroundColor = "#ffe5e5";
		formDados.data.focus();
		erro = false;
		//return false;
	}
	

	if (!formDados.concordo.checked)
	{
		formDados.concordo.focus();
		document.getElementById("mensConcordo").value="erro";
		erro = false;
		
	}

	if (erro)
	{
		return true;
	}
	else
	{
		alert("Verifique os campos em branco")
		return false;
	}
}
