// Class: AlmanacObjectChooser


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacObjectChooser::GetScrollOffset() const */

void __thiscall AlmanacObjectChooser::GetScrollOffset(AlmanacObjectChooser *this)

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
    uVar6 = FUN_03b461e4(uVar9,*(undefined8 *)(this + 0xf0));
    if (uVar6 <= uVar8) {
      iVar2 = 0;
      goto LAB_03b46a20;
    }
    plVar3 = (long *)FUN_03b461f0(uVar9,uVar8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar3 + 0x198));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
    ;
    cVar1 = std::operator==((string *)(lVar4 + 8),(string *)(lVar5 + 8));
    uVar6 = uVar8 + 1;
  } while (cVar1 == '\0');
  local_14 = 0;
  iVar2 = *(int *)(*(long *)(this + 0x20) + 0x50);
  plVar3 = (long *)FUN_03b461f0(*(undefined8 *)(this + 0xe8),uVar8);
  local_10 = (-*(int *)(*plVar3 + 0x48) - *(int *)(*plVar3 + 0x50) / 2) + iVar2 / 2;
  piVar7 = eastl::min_alt<int>(&local_14,&local_10);
  local_c = iVar2 - *(int *)(this + 0x50);
  piVar7 = eastl::max_alt<int>(piVar7,&local_c);
  iVar2 = *piVar7;
LAB_03b46a20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* AlmanacObjectChooser::AlmanacObjectChooser(Sexy::RtWeakPtr<ObjectTypeDescriptor const>,
   AlmanacWidget*) */

void __thiscall
AlmanacObjectChooser::AlmanacObjectChooser
          (AlmanacObjectChooser *this,RtWeakPtr *param_2,undefined8 param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06731d90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067320c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),param_2);
  *(undefined8 *)(this + 0x100) = param_3;
  return;
}


/* AlmanacObjectChooser::~AlmanacObjectChooser() */

void __thiscall AlmanacObjectChooser::~AlmanacObjectChooser(AlmanacObjectChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_06731d90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067320c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::vector<AlmanacObjectButton*,std::allocator<AlmanacObjectButton*>>::~vector
            ((vector<AlmanacObjectButton*,std::allocator<AlmanacObjectButton*>> *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AlmanacObjectChooser::~AlmanacObjectChooser() */

void __thiscall AlmanacObjectChooser::~AlmanacObjectChooser(AlmanacObjectChooser *this)

{
  ~AlmanacObjectChooser(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacObjectChooser::ButtonDepress(int) */

void __thiscall AlmanacObjectChooser::ButtonDepress(AlmanacObjectChooser *this,int param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  AlmanacWidget *pAVar9;
  long lVar10;
  undefined8 uVar11;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0xe8);
  uVar7 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_03b461e4(uVar8,*(undefined8 *)(this + 0xf0));
  if (uVar7 < uVar2) {
    plVar3 = (long *)FUN_03b461f8(uVar8,uVar7);
    cVar1 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(this + 0xe0),(RtWeakPtrBase *)(*plVar3 + 0x198));
    if (cVar1 == '\0') {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_Button_Almanac_Tab_Small");
      puVar5 = (undefined8 *)FUN_03b461f8(*(undefined8 *)(this + 0xe8),uVar7);
      cVar1 = AlmanacObjectButton::GetIsVisible((AlmanacObjectButton *)*puVar5);
      if (cVar1 != '\0') {
        uVar2 = 0;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_18);
        uVar11 = *(undefined8 *)(this + 0xe8);
        plVar3 = (long *)FUN_03b461f8(uVar11,uVar7);
        uVar8 = *(undefined8 *)(this + 0xf0);
        *(undefined1 *)(*plVar3 + 0x1a0) = 1;
        uVar6 = FUN_03b461e4(uVar11,uVar8);
        while (uVar2 < uVar6) {
          plVar3 = (long *)FUN_03b461f8(uVar11,uVar2);
          lVar10 = *plVar3;
          if (*(int *)(lVar10 + 0xd4) == param_1) {
            pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            uVar2 = uVar2 + 1;
            AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_Tab_Scroll");
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)(lVar10 + 0x198));
            uVar11 = *(undefined8 *)(this + 0xe8);
            uVar8 = *(undefined8 *)(this + 0xf0);
            *(undefined1 *)(lVar10 + 0x1a0) = 1;
            uVar6 = FUN_03b461e4(uVar11,uVar8);
          }
          else {
            *(undefined1 *)(lVar10 + 0x1a0) = 0;
            uVar2 = uVar2 + 1;
          }
        }
        pAVar9 = *(AlmanacWidget **)(this + 0x100);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
        AlmanacWidget::SetAlmanacPage(pAVar9,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18)
        ;
      }
      plVar3 = (long *)FUN_03b461f8(*(undefined8 *)(this + 0xe8),uVar7);
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


/* non-virtual thunk to AlmanacObjectChooser::ButtonDepress(int) */

void __thiscall AlmanacObjectChooser::ButtonDepress(AlmanacObjectChooser *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacObjectChooser::Initialize(int, int, int, int) */

void __thiscall
AlmanacObjectChooser::Initialize
          (AlmanacObjectChooser *this,int param_1,int param_2,int param_3,int param_4)

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
  AlmanacObjectButton *pAVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  RAttribute *this_02;
  vector *pvVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int local_58;
  int local_54;
  int local_50 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  AlmanacObjectButton *local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  AlmanacObjectButton *local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03b4642c(4,___stack_chk_guard,param_2,param_3);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
  iVar5 = FUN_03b4642c(3);
  CachedUIResourcePtr<Sexy::Image>::GetId();
  GetImageOffset(&local_58,(RtId *)&local_20);
  Sexy::RtId::~RtId((RtId *)&local_20);
  UIWidget::ConvertPSDImageOffsetToUISpace(&local_58,&local_54,1536.0);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb050);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar6 = iVar6 + local_54;
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb050);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar8 = FUN_03b4642c(3);
  local_50[0] = ((param_4 + iVar6 * -2) - iVar8) / 2;
  local_50[1] = local_50[0] + iVar6 + iVar5;
  iVar5 = FUN_03b4642c(0x13);
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar2 = Sexy::RtObject::IsA<PlantType>(this_01);
  if (bVar2) {
    lVar12 = FUN_03b49160();
    iVar7 = iVar7 + local_58;
    lVar12 = FUN_03b461d0(*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x30));
    iVar8 = iVar4;
    if (lVar12 != 0) {
      lVar19 = 0;
      uVar20 = 0;
      do {
        while( true ) {
          psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          lVar14 = FUN_03b49160();
          FUN_03b461dc(*(undefined8 *)(lVar14 + 0x28),lVar19);
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar13);
          cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_38);
          if ((cVar3 != '\0') ||
             (lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38), pLVar1 = gLawnApp,
             *(char *)(lVar14 + 0x30) == '\0')) break;
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          cVar3 = LawnApp::CanLoadGroup(pLVar1,(string *)(lVar14 + 0x10));
          pLVar1 = gLawnApp;
          if (cVar3 == '\0') {
            lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            cVar3 = LawnApp::CanLoadGroups(pLVar1,(vector *)(lVar14 + 0x80));
            if (cVar3 == '\0') break;
          }
          uVar21 = 0;
          if ((uVar20 != 0) && (uVar21 = uVar20 & 1, (uVar20 & 1) == 0)) {
            iVar8 = iVar8 + iVar7 + iVar5;
          }
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_38);
          pAVar15 = ::operator_new(0x1a8);
          AlmanacObjectButton::AlmanacObjectButton(pAVar15,uVar20,this + 0xd8,(RtId *)&local_20);
          local_30[0] = pAVar15;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          (**(code **)(*(long *)local_30[0] + 0x198))
                    (local_30[0],iVar8,local_50[(int)uVar21],iVar7,iVar6);
          pAVar15 = local_30[0];
          cVar3 = Sexy::RtWeakPtrBase::operator==
                            ((RtWeakPtrBase *)(local_30[0] + 0x198),(RtWeakPtrBase *)this_00);
          if (cVar3 != '\0') {
            pAVar15[0x1a0] = (AlmanacObjectButton)0x1;
          }
          lVar19 = lVar19 + 1;
          uVar20 = uVar20 + 1;
          std::vector<AlmanacObjectButton*,std::allocator<AlmanacObjectButton*>>::push_back
                    ((vector<AlmanacObjectButton*,std::allocator<AlmanacObjectButton*>> *)
                     (this + 0xe8),local_30);
          (**(code **)(*(long *)this + 0x60))(this,local_30[0]);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (lVar19 == lVar12) goto LAB_03b4c22c;
        }
        lVar19 = lVar19 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      } while (lVar19 != lVar12);
    }
LAB_03b4c22c:
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,iVar8 + iVar7 + iVar4,param_4);
  }
  else {
    lVar12 = FUN_03b49160();
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20,
               (vector *)(lVar12 + 0x40));
    lVar12 = FUN_03b461d0(local_20,local_18);
    uVar16 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)&local_20);
    uVar17 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)&local_20);
    std::
    reverse<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
              (uVar16,uVar17);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb448);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb448);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb448);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb4c0);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar10);
    Sexy::Insets::Insets((Insets *)local_30,iVar4,(param_4 - iVar6) / 2,iVar7,iVar8 + iVar9 / 2);
    if (lVar12 != 0) {
      lVar19 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          psVar13 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr()
          ;
          FUN_03b461dc(local_20,lVar19);
          ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar13);
          cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_48);
          pLVar1 = gLawnApp;
          if (cVar3 == '\0') break;
LAB_03b4c388:
          lVar19 = lVar19 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          if (lVar19 == lVar12) goto LAB_03b4c4c4;
        }
        this_02 = (RAttribute *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        pvVar18 = (vector *)Reflection::RAttribute::GetValue(this_02);
        cVar3 = LawnApp::CanLoadGroups(pLVar1,pvVar18);
        if (cVar3 == '\0') goto LAB_03b4c388;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_48);
        pAVar15 = ::operator_new(0x1a8);
        AlmanacObjectButton::AlmanacObjectButton
                  (pAVar15,iVar6,this + 0xd8,(RtWeakPtr<Sexy::SoundResource> *)aRStack_38);
        local_40 = pAVar15;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        (**(code **)(*(long *)local_40 + 0x1a0))(local_40,(Insets *)local_30);
        pAVar15 = local_40;
        cVar3 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)(local_40 + 0x198),(RtWeakPtrBase *)this_00);
        if (cVar3 != '\0') {
          pAVar15[0x1a0] = (AlmanacObjectButton)0x1;
        }
        lVar19 = lVar19 + 1;
        iVar6 = iVar6 + 1;
        std::vector<AlmanacObjectButton*,std::allocator<AlmanacObjectButton*>>::push_back
                  ((vector<AlmanacObjectButton*,std::allocator<AlmanacObjectButton*>> *)
                   (this + 0xe8),&local_40);
        (**(code **)(*(long *)this + 0x60))(this,local_40);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb448);
        iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        local_30[0] = (AlmanacObjectButton *)
                      CONCAT44(local_30[0]._4_4_,(int)local_30[0] + iVar7 + iVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      } while (lVar19 != lVar12);
    }
LAB_03b4c4c4:
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,iVar4 + (int)local_30[0],param_4);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

