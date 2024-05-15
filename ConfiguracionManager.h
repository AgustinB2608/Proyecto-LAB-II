#pragma once
#include "MunicipioManager.h"
#include "EmpresaManager.h"

class ConfiguracionManager
{
    public:
        void Menu();
        void copiaEmpresas();
        void copiaMunicipios();
        void restaurarEmpresas();
        void restaurarMunicipios();
    protected:

    private:
        EmpresaManager empresaManager;
        MunicipioManager municipioManager;
};

