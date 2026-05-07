// Class: CheatUILineFolder


/* CheatUILineFolder::StaticGetClass() */

long * CheatUILineFolder::StaticGetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineFolder",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineFolder::GetClass() const */

long * CheatUILineFolder::GetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineFolder",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineFolder::SetUseIndent(bool) */

void __thiscall CheatUILineFolder::SetUseIndent(CheatUILineFolder *this,bool param_1)

{
  this[0x4d] = (CheatUILineFolder)param_1;
  return;
}


/* CheatUILineFolder::SortByTitle(bool) */

void __thiscall CheatUILineFolder::SortByTitle(CheatUILineFolder *this,bool param_1)

{
  size_t __nmemb;
  void *__base;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x50);
  DAT_06ad0b08 = param_1;
  __nmemb = FUN_03c58458(uVar1,*(undefined8 *)(this + 0x58));
  if (__nmemb == 0) {
    return;
  }
  __base = (void *)FUN_03c58464(uVar1,0);
  qsort(__base,__nmemb,0x10,FUN_03c5989c);
  return;
}


/* CheatUILineFolder::CheatUILineFolder() */

void __thiscall CheatUILineFolder::CheatUILineFolder(CheatUILineFolder *this)

{
  CheatUILine::CheatUILine((CheatUILine *)this);
  this[0x4c] = (CheatUILineFolder)0x0;
  this[0x4d] = (CheatUILineFolder)0x1;
  *(undefined ***)this = &PTR_GetClass_06754010;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* CheatUILineFolder::StaticNew() */

CheatUILineFolder * CheatUILineFolder::StaticNew(void)

{
  CheatUILineFolder *this;
  
  this = ::operator_new(0x68);
  CheatUILineFolder(this);
  return this;
}


/* CheatUILineFolder::CheatUILineFolder(std::string const&, bool) */

void __thiscall
CheatUILineFolder::CheatUILineFolder(CheatUILineFolder *this,string *param_1,bool param_2)

{
  CheatUILine::CheatUILine((CheatUILine *)this,(Cheat *)0x0,param_1);
  this[0x4c] = (CheatUILineFolder)param_2;
  this[0x4d] = (CheatUILineFolder)0x1;
  *(undefined ***)this = &PTR_GetClass_06754010;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineFolder::GetHeight() */

void __thiscall CheatUILineFolder::GetHeight(CheatUILineFolder *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  CheatManager *pCVar7;
  ulong uVar8;
  Cheat *pCVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  string asStack_10 [8];
  long local_8;
  
  fVar13 = 0.0;
  local_8 = ___stack_chk_guard;
  CheatUILine::GetLabel();
  lVar5 = FUN_05474184(asStack_10);
  std::string::~string(asStack_10);
  if (lVar5 != 0) {
    Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    fVar13 = (float)CheatUIPanel::GetDefaultLineHeight();
    if (this[0x4c] == (CheatUILineFolder)0x0) goto LAB_03c5bd14;
  }
  uVar11 = *(undefined8 *)(this + 0x50);
  uVar10 = 0;
  lVar5 = FUN_03c58458(uVar11,*(undefined8 *)(this + 0x58));
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_03c58464(uVar11,uVar10);
      uVar3 = PakInterface::GetFileSearchOrder((PakInterface *)*puVar6);
      pCVar7 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      uVar4 = CheatManager::GetCurrentContext(pCVar7);
      bVar1 = TestFlag<VaseFlags>(uVar3,uVar4);
      if (bVar1) {
        pCVar9 = (Cheat *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar6);
        if (pCVar9 != (Cheat *)0x0) {
          pCVar7 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          cVar2 = CheatManager::IsCheatValidForCurrentContext(pCVar7,pCVar9);
          if (cVar2 == '\0') goto LAB_03c5bcfc;
        }
        fVar12 = (float)(**(code **)(*(long *)*puVar6 + 0x48))((long *)*puVar6);
        fVar13 = fVar13 + fVar12;
      }
LAB_03c5bcfc:
      uVar10 = uVar10 + 1;
      uVar11 = *(undefined8 *)(this + 0x50);
      uVar8 = FUN_03c58458(uVar11,*(undefined8 *)(this + 0x58));
    } while (uVar10 < uVar8);
  }
LAB_03c5bd14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar13);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineFolder::onTap(Sexy::Point const&) */

void __thiscall CheatUILineFolder::onTap(CheatUILineFolder *this,Point *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  CheatManager *pCVar7;
  ulong uVar8;
  Cheat *pCVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  Point aPStack_20 [8];
  string asStack_18 [4];
  int local_14;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CheatUILine::GetLabel();
  lVar5 = FUN_05474184(asStack_18);
  std::string::~string(asStack_18);
  if (lVar5 == 0) {
    iVar10 = 0;
  }
  else {
    Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    fVar13 = (float)CheatUIPanel::GetDefaultLineHeight();
    iVar10 = (int)fVar13;
    if ((float)*(int *)(param_1 + 4) < fVar13) {
      this[0x4c] = (CheatUILineFolder)((byte)this[0x4c] ^ 1);
      goto LAB_03c5beb0;
    }
  }
  uVar11 = 0;
  fVar13 = (float)FUN_03c58574(DAT_06ad0bb8);
  Sexy::Insets::Insets((Insets *)asStack_18,0,iVar10,(int)fVar13,0);
  uVar12 = *(undefined8 *)(this + 0x50);
  lVar5 = FUN_03c58458(uVar12,*(undefined8 *)(this + 0x58));
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_03c58464(uVar12,uVar11);
      uVar3 = PakInterface::GetFileSearchOrder((PakInterface *)*puVar6);
      pCVar7 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      uVar4 = CheatManager::GetCurrentContext(pCVar7);
      bVar1 = TestFlag<VaseFlags>(uVar3,uVar4);
      if (bVar1) {
        pCVar9 = (Cheat *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar6);
        if (pCVar9 != (Cheat *)0x0) {
          pCVar7 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          cVar2 = CheatManager::IsCheatValidForCurrentContext(pCVar7,pCVar9);
          if (cVar2 == '\0') goto LAB_03c5be98;
        }
        puVar6 = (undefined8 *)FUN_03c58464(*(undefined8 *)(this + 0x50),uVar11);
        fVar13 = (float)(**(code **)(*(long *)*puVar6 + 0x48))((long *)*puVar6);
        local_c = (int)fVar13;
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)asStack_18,(TPoint *)param_1);
        iVar10 = (int)fVar13;
        if (cVar2 != '\0') {
          Sexy::Point::Point(aPStack_20,*(int *)param_1,*(int *)(param_1 + 4) - local_14);
          puVar6 = (undefined8 *)FUN_03c58464(*(undefined8 *)(this + 0x50),uVar11);
          DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)*puVar6);
          iVar10 = local_c;
        }
        local_14 = local_14 + iVar10;
      }
LAB_03c5be98:
      uVar11 = uVar11 + 1;
      uVar12 = *(undefined8 *)(this + 0x50);
      uVar8 = FUN_03c58458(uVar12,*(undefined8 *)(this + 0x58));
    } while (uVar11 < uVar8);
  }
LAB_03c5beb0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineFolder::onDraw(Sexy::Graphics*) */

void __thiscall CheatUILineFolder::onDraw(CheatUILineFolder *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  Image *pIVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  CheatManager *pCVar11;
  Cheat *pCVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  GraphicsAutoState aGStack_38 [8];
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  CachedResourcePtr<Sexy::Image> *this_00;
  
  fVar15 = 0.0;
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  CheatUILine::GetLabel();
  lVar6 = FUN_05474184(asStack_18);
  std::string::~string(asStack_18);
  if (lVar6 != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    fVar15 = (float)CheatUIPanel::GetDefaultLineHeight();
    fVar16 = (float)FUN_03c58574(0x40800000);
    Sexy::Graphics::Translate(param_1,(int)fVar16,(int)fVar16);
    Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    fVar16 = (float)CheatUIPanel::GetDefaultLineHeight();
    fVar14 = (float)FUN_03c58574(DAT_06ad0a88);
    Sexy::Insets::Insets(aIStack_28,0,(int)((fVar16 - fVar14) * 0.5),(int)fVar14,(int)fVar14);
    Sexy::Color::Color((Color *)asStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)asStack_18);
    if (this[0x4c] == (CheatUILineFolder)0x0) {
      this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad0b48;
    }
    else {
      this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad0b70;
    }
    pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_00);
    lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0b48);
    iVar1 = *(int *)(lVar6 + 0x38);
    lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0b48);
    Sexy::Insets::Insets((Insets *)asStack_18,0,0,iVar1,*(int *)(lVar6 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar7,(TRect *)aIStack_28,(TRect *)asStack_18);
    CheatUILine::onDraw((CheatUILine *)this,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if ((this[0x4c] != (CheatUILineFolder)0x0) &&
     (lVar6 = FUN_03c58458(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58)), lVar6 != 0))
  {
    Sexy::Graphics::Translate(param_1,0,(int)fVar15);
    if (this[0x4d] != (CheatUILineFolder)0x0) {
      fVar15 = (float)FUN_03c58574(0x40800000);
      fVar16 = (float)FUN_03c58574(DAT_06ad0a88);
      Sexy::Graphics::Translate(param_1,(int)(fVar16 * 0.5 + fVar15 * 2.0),0);
    }
    uVar8 = *(undefined8 *)(this + 0x50);
    uVar13 = 0;
    do {
      puVar10 = (undefined8 *)FUN_03c58464(uVar8,uVar13);
      uVar4 = PakInterface::GetFileSearchOrder((PakInterface *)*puVar10);
      pCVar11 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      uVar5 = CheatManager::GetCurrentContext(pCVar11);
      bVar2 = TestFlag<VaseFlags>(uVar4,uVar5);
      if (bVar2) {
        pCVar12 = (Cheat *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar10);
        if (pCVar12 != (Cheat *)0x0) {
          pCVar11 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          cVar3 = CheatManager::IsCheatValidForCurrentContext(pCVar11,pCVar12);
          if (cVar3 == '\0') goto LAB_03c5c190;
        }
        CheatUILine::Draw((CheatUILine *)*puVar10,param_1);
        fVar15 = (float)(**(code **)(*(long *)*puVar10 + 0x48))((long *)*puVar10);
        Sexy::Graphics::Translate(param_1,0,(int)fVar15);
      }
LAB_03c5c190:
      uVar8 = *(undefined8 *)(this + 0x50);
      uVar13 = uVar13 + 1;
      uVar9 = FUN_03c58458(uVar8,*(undefined8 *)(this + 0x58));
    } while (uVar13 < uVar9);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CheatUILineFolder::~CheatUILineFolder() */

void __thiscall CheatUILineFolder::~CheatUILineFolder(CheatUILineFolder *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  uVar4 = 0;
  *(undefined ***)this = &PTR_GetClass_06754010;
  uVar1 = FUN_03c58458(uVar5,*(undefined8 *)(this + 0x58));
  while (uVar3 = uVar4, uVar4 < uVar1) {
    while( true ) {
      uVar4 = uVar3 + 1;
      plVar2 = (long *)FUN_03c58464(uVar5,uVar3);
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) break;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      uVar5 = *(undefined8 *)(this + 0x50);
      uVar1 = FUN_03c58458(uVar5,*(undefined8 *)(this + 0x58));
      uVar3 = uVar4;
      if (uVar1 <= uVar4) goto LAB_03c5c328;
    }
  }
LAB_03c5c328:
  std::vector<CheatUILineTracker,std::allocator<CheatUILineTracker>>::clear
            ((vector<CheatUILineTracker,std::allocator<CheatUILineTracker>> *)(this + 0x50));
  std::vector<CheatUILineTracker,std::allocator<CheatUILineTracker>>::~vector
            ((vector<CheatUILineTracker,std::allocator<CheatUILineTracker>> *)(this + 0x50));
  CheatUILine::~CheatUILine((CheatUILine *)this);
  return;
}


/* CheatUILineFolder::~CheatUILineFolder() */

void __thiscall CheatUILineFolder::~CheatUILineFolder(CheatUILineFolder *this)

{
  ~CheatUILineFolder(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineFolder::AddLine(CheatUILine*) */

void __thiscall CheatUILineFolder::AddLine(CheatUILineFolder *this,CheatUILine *param_1)

{
  CheatUILine *local_18;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  local_10 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  local_c = local_10;
  std::vector<CheatUILineTracker,std::allocator<CheatUILineTracker>>::push_back
            ((vector<CheatUILineTracker,std::allocator<CheatUILineTracker>> *)(this + 0x50),
             (CheatUILineTracker *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

