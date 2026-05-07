// Class: AwakenObjectChooser


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwakenObjectChooser::GetScrollOffset() const */

void __thiscall AwakenObjectChooser::GetScrollOffset(AwakenObjectChooser *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  do {
    uVar8 = uVar6;
    uVar9 = *(undefined8 *)(this + 0xe8);
    uVar6 = FUN_04b221f4(uVar9,*(undefined8 *)(this + 0xf0));
    if (uVar6 <= uVar8) {
      iVar2 = 0;
      goto LAB_04b22a00;
    }
    plVar3 = (long *)FUN_04b22200(uVar9,uVar8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar3 + 0x198));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
    ;
    cVar1 = std::operator==((string *)(lVar4 + 8),(string *)(lVar5 + 8));
    uVar6 = uVar8 + 1;
  } while (cVar1 == '\0');
  local_14 = 0;
  iVar2 = *(int *)(*(long *)(this + 0x20) + 0x50);
  plVar3 = (long *)FUN_04b22200(*(undefined8 *)(this + 0xe8),uVar8);
  local_10 = (-*(int *)(*plVar3 + 0x48) - *(int *)(*plVar3 + 0x50) / 2) + iVar2 / 2;
  piVar7 = eastl::min_alt<int>(&local_14,&local_10);
  local_c = iVar2 - *(int *)(this + 0x50);
  piVar7 = eastl::max_alt<int>(piVar7,&local_c);
  iVar2 = *piVar7;
LAB_04b22a00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* AwakenObjectChooser::AwakenObjectChooser(Sexy::RtWeakPtr<ObjectTypeDescriptor const>,
   ArenaAwakenWidget*) */

void __thiscall
AwakenObjectChooser::AwakenObjectChooser
          (AwakenObjectChooser *this,RtWeakPtr *param_2,undefined8 param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069559e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06955d10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),param_2);
  *(undefined8 *)(this + 0x100) = param_3;
  return;
}


/* AwakenObjectChooser::~AwakenObjectChooser() */

void __thiscall AwakenObjectChooser::~AwakenObjectChooser(AwakenObjectChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_069559e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06955d10;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::vector<AwakenObjectButton*,std::allocator<AwakenObjectButton*>>::~vector
            ((vector<AwakenObjectButton*,std::allocator<AwakenObjectButton*>> *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AwakenObjectChooser::~AwakenObjectChooser() */

void __thiscall AwakenObjectChooser::~AwakenObjectChooser(AwakenObjectChooser *this)

{
  ~AwakenObjectChooser(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwakenObjectChooser::ButtonDepress(int) */

void __thiscall AwakenObjectChooser::ButtonDepress(AwakenObjectChooser *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0xe8);
  uVar7 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04b221f4(uVar8,*(undefined8 *)(this + 0xf0));
  if (uVar7 < uVar2) {
    plVar3 = (long *)FUN_04b22208(uVar8,uVar7);
    cVar1 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(this + 0xe0),(RtWeakPtrBase *)(*plVar3 + 0x198));
    if (cVar1 == '\0') {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_Button_Almanac_Tab_Small");
      puVar5 = (undefined8 *)FUN_04b22208(*(undefined8 *)(this + 0xe8),uVar7);
      cVar1 = AwakenObjectButton::GetIsVisible((AwakenObjectButton *)*puVar5);
      if (cVar1 != '\0') {
        uVar2 = 0;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_18);
        uVar10 = *(undefined8 *)(this + 0xe8);
        plVar3 = (long *)FUN_04b22208(uVar10,uVar7);
        uVar8 = *(undefined8 *)(this + 0xf0);
        *(undefined1 *)(*plVar3 + 0x1a0) = 1;
        uVar6 = FUN_04b221f4(uVar10,uVar8);
        while (uVar2 < uVar6) {
          plVar3 = (long *)FUN_04b22208(uVar10,uVar2);
          lVar9 = *plVar3;
          if (*(int *)(lVar9 + 0xd4) == param_1) {
            pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            uVar2 = uVar2 + 1;
            AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_Tab_Scroll");
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)(lVar9 + 0x198));
            uVar10 = *(undefined8 *)(this + 0xe8);
            uVar8 = *(undefined8 *)(this + 0xf0);
            *(undefined1 *)(lVar9 + 0x1a0) = 1;
            uVar6 = FUN_04b221f4(uVar10,uVar8);
          }
          else {
            *(undefined1 *)(lVar9 + 0x1a0) = 0;
            uVar2 = uVar2 + 1;
          }
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18)
        ;
      }
      plVar3 = (long *)FUN_04b22208(*(undefined8 *)(this + 0xe8),uVar7);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)(*plVar3 + 0x198));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AwakenObjectChooser::ButtonDepress(int) */

void __thiscall AwakenObjectChooser::ButtonDepress(AwakenObjectChooser *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwakenObjectChooser::Initialize(int, int, int, int) */

void __thiscall
AwakenObjectChooser::Initialize
          (AwakenObjectChooser *this,int param_1,int param_2,int param_3,int param_4)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SalesProgressBar *pSVar10;
  LotteryResultProgressBar *pLVar11;
  RtObject *this_01;
  long lVar12;
  string *psVar13;
  long lVar14;
  AwakenObjectButton *pAVar15;
  RAttribute *this_02;
  vector *pvVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int local_38 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  AwakenObjectButton *local_28;
  AwakenObjectButton *local_20;
  int local_18 [4];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_04b22278(0xd,___stack_chk_guard,this_00,param_3);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84638);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84638);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar7 = FUN_04b22278(0xd);
  local_38[0] = ((param_4 + iVar5 * -2) - iVar7) / 2;
  local_38[1] = iVar4 + local_38[0] + iVar5;
  iVar7 = FUN_04b22278(0x13);
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar2 = Sexy::RtObject::IsA<PlantType>(this_01);
  if (bVar2) {
    lVar12 = FUN_04b23f90();
    lVar12 = FUN_04b221e0(*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x30));
    iVar8 = iVar4;
    if (lVar12 != 0) {
      lVar17 = 0;
      uVar18 = 0;
LAB_04b246f4:
      do {
        psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        lVar14 = FUN_04b23f90();
        FUN_04b221ec(*(undefined8 *)(lVar14 + 0x28),lVar17);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
        cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_28);
        if ((cVar3 == '\0') &&
           (lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28), pLVar1 = gLawnApp,
           *(char *)(lVar14 + 0x30) != '\0')) {
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          cVar3 = LawnApp::CanLoadGroup(pLVar1,(string *)(lVar14 + 0x10));
          if (cVar3 != '\0') {
            uVar19 = 0;
            if ((uVar18 != 0) && (uVar19 = uVar18 & 1, (uVar18 & 1) == 0)) {
              iVar8 = iVar8 + iVar6 + iVar7;
            }
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)&local_28);
            pAVar15 = ::operator_new(0x1a8);
            AwakenObjectButton::AwakenObjectButton
                      (pAVar15,uVar18,this + 0xd8,(RtWeakPtr<Sexy::SoundResource> *)local_18);
            local_20 = pAVar15;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
            (**(code **)(*(long *)local_20 + 0x198))
                      (local_20,iVar8,local_38[(int)uVar19],iVar6,iVar5);
            pAVar15 = local_20;
            cVar3 = Sexy::RtWeakPtrBase::operator==
                              ((RtWeakPtrBase *)(local_20 + 0x198),(RtWeakPtrBase *)this_00);
            if (cVar3 != '\0') {
              pAVar15[0x1a0] = (AwakenObjectButton)0x1;
            }
            lVar17 = lVar17 + 1;
            uVar18 = uVar18 + 1;
            std::vector<AwakenObjectButton*,std::allocator<AwakenObjectButton*>>::push_back
                      ((vector<AwakenObjectButton*,std::allocator<AwakenObjectButton*>> *)
                       (this + 0xe8),&local_20);
            (**(code **)(*(long *)this + 0x60))(this,local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            if (lVar17 == lVar12) break;
            goto LAB_04b246f4;
          }
        }
        lVar17 = lVar17 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      } while (lVar17 != lVar12);
    }
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,iVar8 + iVar6 + iVar4,param_4);
  }
  else {
    lVar12 = FUN_04b23f90();
    lVar12 = FUN_04b221e0(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84598);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84598);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84598);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84610);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar10);
    Sexy::Insets::Insets((Insets *)local_18,iVar4,(param_4 - iVar5) / 2,iVar6,iVar8 + iVar9 / 2);
    if (lVar12 != 0) {
      lVar17 = 0;
      iVar5 = 0;
LAB_04b24980:
      do {
        psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        lVar14 = FUN_04b23f90();
        FUN_04b221ec(*(undefined8 *)(lVar14 + 0x40),lVar17);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar13);
        cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_30);
        pLVar1 = gLawnApp;
        if (cVar3 == '\0') {
          this_02 = (RAttribute *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          pvVar16 = (vector *)Reflection::RAttribute::GetValue(this_02);
          cVar3 = LawnApp::CanLoadGroups(pLVar1,pvVar16);
          if (cVar3 != '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_30);
            pAVar15 = ::operator_new(0x1a8);
            AwakenObjectButton::AwakenObjectButton
                      (pAVar15,iVar5,this + 0xd8,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
            local_28 = pAVar15;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            (**(code **)(*(long *)local_28 + 0x1a0))(local_28,(Insets *)local_18);
            pAVar15 = local_28;
            cVar3 = Sexy::RtWeakPtrBase::operator==
                              ((RtWeakPtrBase *)(local_28 + 0x198),(RtWeakPtrBase *)this_00);
            if (cVar3 != '\0') {
              pAVar15[0x1a0] = (AwakenObjectButton)0x1;
            }
            lVar17 = lVar17 + 1;
            iVar5 = iVar5 + 1;
            std::vector<AwakenObjectButton*,std::allocator<AwakenObjectButton*>>::push_back
                      ((vector<AwakenObjectButton*,std::allocator<AwakenObjectButton*>> *)
                       (this + 0xe8),&local_28);
            (**(code **)(*(long *)this + 0x60))(this,local_28);
            pLVar11 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84598);
            iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
            local_18[0] = local_18[0] + iVar6 + iVar7;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            if (lVar17 == lVar12) break;
            goto LAB_04b24980;
          }
        }
        lVar17 = lVar17 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      } while (lVar17 != lVar12);
    }
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,iVar4 + local_18[0],param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

