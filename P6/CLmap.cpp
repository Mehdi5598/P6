#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [id_personne], [nom], [prenom] FROM [POO].[dbo].[TB_PERSONNE]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO TB_PERSONNE (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM TB_PERSONNE WHERE id_personne = "+ this->Id+ ";";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE TB_PERSONNE SET nom = '" + this->nom + "', prenom = '" + this->prenom + "' WHERE id_personne = " + this->Id + ";";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }