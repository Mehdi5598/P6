#include "CLservice.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::delUnePersonne(System::String^Id)
{
	System::String^ sql;

	this->oMappTB->setId(System::Convert::ToInt32(Id));
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updatUnePersonne(System::String^ Id, System::String^newNom, System::String^newPrenom)
{
	System::String^ sql;

	this->oMappTB->setId(System::Convert::ToInt32(Id));
	this->oMappTB->setNom(newNom);
	this->oMappTB->setPrenom(newPrenom);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}
