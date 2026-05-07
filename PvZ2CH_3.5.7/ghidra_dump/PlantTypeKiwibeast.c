// Class: PlantTypeKiwibeast


/* PlantTypeKiwibeast::StaticGetClass() */

long * PlantTypeKiwibeast::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeKiwibeast",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeKiwibeast::GetClass() const */

long * PlantTypeKiwibeast::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeKiwibeast",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeKiwibeast::PlantTypeKiwibeast() */

void __thiscall PlantTypeKiwibeast::PlantTypeKiwibeast(PlantTypeKiwibeast *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067428f0;
  return;
}


/* PlantTypeKiwibeast::StaticNew() */

PlantTypeKiwibeast * PlantTypeKiwibeast::StaticNew(void)

{
  PlantTypeKiwibeast *this;
  
  this = ::operator_new(0x138);
  PlantTypeKiwibeast(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeKiwibeast::GetCost(PlantAvatarType) const */

void PlantTypeKiwibeast::GetCost(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long extraout_x0;
  wchar16 *pwVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x4;
  int iVar7;
  float fVar8;
  LineBreakCategory aLStack_38 [8];
  LineBreakCategory aLStack_30 [8];
  LineBreakCategory aLStack_28 [8];
  LineBreakCategory aLStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = PlantType::GetCost();
  if (*(long *)(gLawnApp + 0x9f0) == 0) goto LAB_03bfccf4;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"kiwibeast");
  iVar3 = PlayerInfo::GetPlantStarLevel(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (extraout_x0 == 0) goto LAB_03bfccf4;
  iVar7 = *(int *)(extraout_x0 + 0x798);
  fVar8 = *(float *)(extraout_x0 + 0x79c);
  if (iVar3 < 2) {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_38;
    std::string::string((string *)aLStack_20,"SetPlantLevel2");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)aLStack_20,pLVar5,in_x3,in_x4);
    if (cVar1 == '\0') {
      pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar5 = aLStack_30;
      std::string::string(asStack_18,"SetPlantLevel3");
      cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar4,(wchar16 *)asStack_18,pLVar5,in_x3,in_x4);
      if (cVar1 == '\0') {
        pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        in_x3 = aLStack_28;
        pLVar5 = in_x3;
        pLVar6 = in_x3;
        std::string::string(asStack_10,"SetPlantLevel4");
        cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar4,(wchar16 *)asStack_10,pLVar5,pLVar6,in_x4);
        std::string::~string(asStack_10);
        nop();
      }
      std::string::~string(asStack_18);
      nop();
      std::string::~string((string *)aLStack_20);
      nop();
      if (cVar1 == '\0') goto LAB_03bfccf4;
    }
    else {
      std::string::~string((string *)aLStack_20);
      nop();
    }
  }
  if (iVar3 < 3) {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_28;
    std::string::string(asStack_18,"SetPlantLevel3");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_18,pLVar5,in_x3,in_x4);
    if (cVar1 != '\0') {
      std::string::~string(asStack_18);
      nop();
      goto LAB_03bfcce0;
    }
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_20;
    std::string::string(asStack_10,"SetPlantLevel4");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar1 != '\0') {
      iVar7 = (int)(fVar8 * (float)iVar7 + (float)iVar7);
    }
  }
  else {
LAB_03bfcce0:
    iVar7 = (int)(fVar8 * (float)iVar7 + (float)iVar7);
  }
  iVar2 = iVar2 - iVar7;
LAB_03bfccf4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* PlantTypeKiwibeast::~PlantTypeKiwibeast() */

void __thiscall PlantTypeKiwibeast::~PlantTypeKiwibeast(PlantTypeKiwibeast *this)

{
  *(undefined ***)this = &PTR_GetClass_067428f0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeKiwibeast::~PlantTypeKiwibeast() */

void __thiscall PlantTypeKiwibeast::~PlantTypeKiwibeast(PlantTypeKiwibeast *this)

{
  ~PlantTypeKiwibeast(this);
  AK::FreeHook(this);
  return;
}

