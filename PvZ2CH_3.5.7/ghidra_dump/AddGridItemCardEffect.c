// Class: AddGridItemCardEffect


/* AddGridItemCardEffect::AddGridItemCardEffect() */

void __thiscall AddGridItemCardEffect::AddGridItemCardEffect(AddGridItemCardEffect *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_066678f0;
  return;
}


/* AddGridItemCardEffect::StaticNew() */

AddGridItemCardEffect * AddGridItemCardEffect::StaticNew(void)

{
  AddGridItemCardEffect *this;
  
  this = ::operator_new(0x28);
  AddGridItemCardEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddGridItemCardEffect::StaticClassInit() */

void AddGridItemCardEffect::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AddGridItemCardEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0360d01c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AddGridItemCardEffect::StaticGetClass() */

long * AddGridItemCardEffect::StaticGetClass(void)

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
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"AddGridItemCardEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AddGridItemCardEffect::~AddGridItemCardEffect() */

void __thiscall AddGridItemCardEffect::~AddGridItemCardEffect(AddGridItemCardEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_066678f0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* AddGridItemCardEffect::~AddGridItemCardEffect() */

void __thiscall AddGridItemCardEffect::~AddGridItemCardEffect(AddGridItemCardEffect *this)

{
  ~AddGridItemCardEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AddGridItemCardEffect::DoEffect() */

void __thiscall AddGridItemCardEffect::DoEffect(AddGridItemCardEffect *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  LawnApp *this_01;
  char cVar2;
  RtObject *this_02;
  AddGridItemCardEffectProperty *pAVar3;
  long lVar4;
  GridTargetAdaptor *pGVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  vector *pvVar7;
  int iVar8;
  Board *pBVar9;
  int iVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x20) = 2;
  this_02 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pAVar3 = Sexy::RtObject::Cast<AddGridItemCardEffectProperty>(this_02);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  pGVar5 = Sexy::RtObject::Cast<GridTargetAdaptor>(*(RtObject **)(lVar4 + 0x18));
  this_01 = gLawnApp;
  if (pGVar5 != (GridTargetAdaptor *)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(pAVar3 + 0x10);
    p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pvVar7 = (vector *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var6);
    cVar2 = LawnApp::IsGroupLoadComplete(this_01,pvVar7);
    if (cVar2 == '\0') {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pvVar7 = (vector *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var6);
      Board::LoadResourceGroupsForGameplay(pBVar9,pvVar7);
    }
    iVar10 = 0;
    GridTargetAdaptor::GetTargetRect();
    if (0 < local_10) {
      do {
        iVar8 = 0;
        if (0 < local_c) {
          do {
            pBVar9 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
            iVar1 = iVar8 + local_14;
            iVar8 = iVar8 + 1;
            Board::AddGridItem(pBVar9,aRStack_20,iVar10 + local_18,iVar1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          } while (iVar8 < local_c);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_10);
    }
  }
  *(undefined4 *)(this + 0x20) = 3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

