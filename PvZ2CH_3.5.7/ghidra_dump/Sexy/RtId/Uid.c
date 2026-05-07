// Class: Sexy::RtId::Uid


/* Sexy::RtId::Uid::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtId::Uid const&) const */

bool __thiscall Sexy::RtId::Uid::operator==(Uid *this,Uid *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    bVar1 = *(int *)(this + 8) == *(int *)(param_1 + 8);
  }
  return bVar1;
}


/* Sexy::RtId::Uid::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtId::Uid const&) const */

bool __thiscall Sexy::RtId::Uid::operator!=(Uid *this,Uid *param_1)

{
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return *(int *)(this + 8) != *(int *)(param_1 + 8);
  }
  return true;
}


/* Sexy::RtId::Uid::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtId::Uid const&) const */

bool __thiscall Sexy::RtId::Uid::operator<(Uid *this,Uid *param_1)

{
  bool bVar1;
  
  bVar1 = *(uint *)param_1 <= *(uint *)this;
  if ((*(uint *)this == *(uint *)param_1) &&
     (bVar1 = *(uint *)(param_1 + 4) <= *(uint *)(this + 4),
     *(uint *)(this + 4) == *(uint *)(param_1 + 4))) {
    bVar1 = *(uint *)(param_1 + 8) <= *(uint *)(this + 8);
  }
  return !bVar1;
}


bool __thiscall Sexy::RtId::Uid::operator<(Uid *this,Uid *param_1)

{
  bool bVar1;
  
  bVar1 = *(uint *)param_1 <= *(uint *)this;
  if ((*(uint *)this == *(uint *)param_1) &&
     (bVar1 = *(uint *)(param_1 + 4) <= *(uint *)(this + 4),
     *(uint *)(this + 4) == *(uint *)(param_1 + 4))) {
    bVar1 = *(uint *)(param_1 + 8) <= *(uint *)(this + 8);
  }
  return !bVar1;
}


/* Sexy::RtId::Uid::TEMPNAMEPLACEHOLDERVALUE() const */

bool __thiscall Sexy::RtId::Uid::operator!(Uid *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)this == 0) && (*(int *)(this + 4) == 0)) {
    bVar1 = *(int *)(this + 8) == 0;
  }
  return bVar1;
}


/* Sexy::RtId::Uid::Uid(Sexy::RtId const&) */

void __thiscall Sexy::RtId::Uid::Uid(Uid *this,RtId *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = GetSlotIndex(param_1);
  *(undefined4 *)this = uVar1;
  uVar1 = GetRevision(param_1);
  *(undefined4 *)(this + 4) = uVar1;
  lVar3 = RtDb::GetDb();
  uVar1 = FUN_051c075c(*(undefined4 *)(lVar3 + 0x30));
  *(undefined4 *)(this + 8) = uVar1;
  uVar2 = GetTableIndex(param_1);
  if (0x1fff < uVar2) {
    *(undefined4 *)(this + 8) = 0xffffffff;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::Uid::StaticParse(std::string const&) */

void Sexy::RtId::Uid::StaticParse(string *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  long lVar3;
  char *pcVar4;
  int local_44;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_40,param_1);
  lVar3 = FUN_054743b0(asStack_40,0x2e,0);
  if (lVar3 == -1) {
    ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_28);
    local_18 = local_28;
    local_10 = local_20;
  }
  else {
    FUN_05475ffc(asStack_38,asStack_40,0,lVar3);
    FUN_05475ffc((string *)&local_18,asStack_40,lVar3 + 1,0xffffffffffffffff);
    FUN_05474278(asStack_40,(string *)&local_18);
    std::string::~string((string *)&local_18);
    lVar3 = FUN_054743b0(asStack_40,0x2e,0);
    if (lVar3 == -1) {
      ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_28);
      local_18 = local_28;
      local_10 = local_20;
    }
    else {
      FUN_05475ffc(asStack_30,asStack_40,0,lVar3);
      FUN_05475ffc((string *)&local_18,asStack_40,lVar3 + 1,0xffffffffffffffff);
      FUN_05474278(asStack_40,(string *)&local_18);
      std::string::~string((string *)&local_18);
      pcVar4 = (char *)FUN_0547429c(asStack_30);
      wVar1 = atoi(pcVar4);
      pcVar4 = (char *)FUN_0547429c(asStack_38);
      wVar2 = atoi(pcVar4);
      local_44 = 0;
      FUN_031f5e7c((string *)&local_18,&DAT_056e2430,asStack_40);
      StringToInt((string *)&local_18,&local_44);
      std::string::~string((string *)&local_18);
      SortedKern::SortedKern((SortedKern *)&local_28,wVar1,wVar2,local_44);
      local_18 = local_28;
      local_10 = local_20;
      std::string::~string(asStack_30);
    }
    std::string::~string(asStack_38);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,local_10);
}


/* Sexy::RtId::Uid::operator bool() const */

bool __thiscall Sexy::RtId::Uid::operator_cast_to_bool(Uid *this)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(int *)this == 0) && (*(int *)(this + 4) == 0)) {
    bVar1 = *(int *)(this + 8) != 0;
  }
  return bVar1;
}

