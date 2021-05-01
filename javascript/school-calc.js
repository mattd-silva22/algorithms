var media_aluno 
var situcao
var nota_prova1 = parseFloat(prompt("Digite sua nota 1º prova: ")) 
var nota_prova2 = parseFloat(prompt('Digite sua nota 2º prova: '))
var nota_prova3 = parseFloat(prompt("Digite sua nota 3º prova: "))
var faltas_aluno = parseFloat(prompt("Digite seu numero de faltas no semestre: ")) 
const media_minima = 6 
const faltas_maxima = 25


media_aluno = (nota_prova1 + nota_prova2 + nota_prova3) / 3 
                                         
if ( media_aluno >= media_minima  &&  faltas_aluno <= faltas_maxima) {
    alert("aluno aprovado! Parabens")
    situacao = "Aprovado"
} else {
   alert("aluno reprovado! Contactar colegiado")
   situacao = "Reprovado" 
}
document.write('Media do aluno: ' + media_aluno.toFixed(2) + '</br>')
document.write('Nº de falta do aluno: ' + faltas_aluno + '</br>')
document.write('Situação do aluno:' + situacao + '</br>')
















// if (situcao == 'aprovado') {
//     document.write('<p id="ap"> Situaçao do aluno:' + situacao + '</p> </br>')
// } else {
//     document.write('<p id="rp"> Situaçao do aluno:' + situacao + '</p> </br>')
// }





