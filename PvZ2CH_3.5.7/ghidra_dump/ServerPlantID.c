// Class: ServerPlantID


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerPlantID::ToString() */

void ServerPlantID::ToString(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 8) < 1) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ServerPlantID::ServerPlantID(int) */

void __thiscall ServerPlantID::ServerPlantID(ServerPlantID *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerItemID::ServerItemID((ServerItemID *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetWidth_0660b4c0;
  cVar1 = PlantNameMapper::IsIDValid(param_1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,param_1);
    if (cVar1 != '\0') {
      *(int *)(this + 8) = param_1;
    }
  }
  else {
    iVar2 = PlantNameMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
    *(undefined4 *)(this + 8) = uVar3;
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ServerPlantID::ServerPlantID(std::string const&) */

void __thiscall ServerPlantID::ServerPlantID(ServerPlantID *this,string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  NameMapperBase *pNVar3;
  
  ServerItemID::ServerItemID((ServerItemID *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetWidth_0660b4c0;
  pNVar3 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsName(pNVar3,param_1);
  if (cVar1 != '\0') {
    pNVar3 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    uVar2 = NameMapperBase::GetIdForName(pNVar3,param_1);
    *(undefined4 *)(this + 8) = uVar2;
  }
  return;
}

