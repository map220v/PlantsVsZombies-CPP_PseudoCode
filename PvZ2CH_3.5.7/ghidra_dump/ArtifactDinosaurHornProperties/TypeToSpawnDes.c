// Class: ArtifactDinosaurHornProperties::TypeToSpawnDes


/* ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes(ArtifactDinosaurHornProperties::TypeToSpawnDes
   const&) */

void __thiscall
ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes
          (TypeToSpawnDes *this,TypeToSpawnDes *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes() */

void __thiscall ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes(TypeToSpawnDes *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  *(undefined4 *)(this + 8) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes(ArtifactDinosaurHornProperties::TypeToSpawnDes&&)
    */

void __thiscall
ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes
          (TypeToSpawnDes *this,TypeToSpawnDes *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* ArtifactDinosaurHornProperties::TypeToSpawnDes::TEMPNAMEPLACEHOLDERVALUE(ArtifactDinosaurHornProperties::TypeToSpawnDes
   const&) */

TypeToSpawnDes * __thiscall
ArtifactDinosaurHornProperties::TypeToSpawnDes::operator=
          (TypeToSpawnDes *this,TypeToSpawnDes *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}

