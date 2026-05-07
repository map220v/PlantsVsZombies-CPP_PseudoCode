// Class: ShowVotingGridItem


/* ShowVotingGridItem::~ShowVotingGridItem() */

void __thiscall ShowVotingGridItem::~ShowVotingGridItem(ShowVotingGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066edba0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ShowVotingGridItem::~ShowVotingGridItem() */

void __thiscall ShowVotingGridItem::~ShowVotingGridItem(ShowVotingGridItem *this)

{
  ~ShowVotingGridItem(this);
  AK::FreeHook(this);
  return;
}


/* ShowVotingGridItem::ShowVotingGridItem() */

void __thiscall ShowVotingGridItem::ShowVotingGridItem(ShowVotingGridItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066edba0;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowVotingGridItem::Draw(Sexy::Graphics*) */

void __thiscall ShowVotingGridItem::Draw(ShowVotingGridItem *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ResourceInfo *pRVar8;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xf0));
  if (bVar3) {
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xf0));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar8,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  iVar4 = FUN_039c2d44(2);
  iVar5 = FUN_039c2d44(0x1a);
  Sexy::Insets::Insets(aIStack_28,0,iVar4,*(int *)(this + 0x50),iVar5);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar2,aIStack_18,2,1);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe8));
  if (pRVar8 != (ResourceInfo *)0x0) {
    iVar5 = *(int *)(this + 0x50);
    iVar7 = *(int *)(this + 0x54);
    iVar6 = FUN_039c2d44(5);
    iVar4 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    iVar1 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar1 = iVar7;
    }
    Sexy::Insets::Insets(aIStack_18,iVar4 >> 2,(iVar1 >> 2) - iVar6,iVar5 / 2,iVar7 / 2);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe8));
    DrawAdaptiveImage(param_1,aIStack_18,pRVar8);
  }
  iVar5 = FUN_039c2d44(0x20);
  iVar4 = *(int *)(this + 0x54);
  iVar7 = FUN_039c2d44(0x1a);
  Sexy::Insets::Insets(aIStack_28,0,iVar4 - iVar5,*(int *)(this + 0x50),iVar7);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_12_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar2,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowVotingGridItem::Init(LimitGroupBuyItemInfo const&) */

void __thiscall ShowVotingGridItem::Init(ShowVotingGridItem *this,LimitGroupBuyItemInfo *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  CachedUIResourcePtr *this_00;
  string *psVar4;
  undefined4 uVar5;
  undefined1 auStack_50 [8];
  wstring awStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  int local_38;
  int local_34;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_38);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),(RtWeakPtr *)&local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_38);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)&local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  GetGameItemInfo(*(int *)param_1,0x7fffffff,0);
  if (local_38 == 0) {
switchD_039c6298_default:
    this_00 = (CachedUIResourcePtr *)&DAT_06ac0a80;
  }
  else {
    if (local_34 == 1) {
      iVar2 = PlantNameMapperServerID::GetInstance();
      uVar5 = 0;
      NameMapperBase::GetNameForId(iVar2);
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
      if (cVar1 != '\0') {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        uVar5 = *(undefined4 *)(lVar3 + 0xd0);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      std::string::~string((string *)awStack_48);
      lVar3 = StringHelper::ToImage(asStack_18,false);
      if (lVar3 != 0) goto LAB_039c624c;
    }
    else {
      uVar5 = 0;
      lVar3 = StringHelper::ToImage(asStack_18,false);
      if (lVar3 == 0) {
        thunk_FUN_05477b9c(this + 0xd8,auStack_10);
        goto switchD_039c6298_default;
      }
LAB_039c624c:
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0xe8),(RtId *)aRStack_40);
      Sexy::RtId::~RtId((RtId *)aRStack_40);
    }
    thunk_FUN_05477b9c(this + 0xd8,auStack_10);
    switch(uVar5) {
    case 1:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac0cb0;
      break;
    case 2:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac0a00;
      break;
    case 3:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac0c88;
      break;
    case 4:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac0c58;
      break;
    default:
      goto switchD_039c6298_default;
    }
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_00);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  FUN_05478178(awStack_48,L"[VOTE_NUMBER]",auStack_50);
  TodReplaceNumberString(awStack_48,L"{NUM}",*(int *)(param_1 + 4));
  FUN_054766c8(this + 0xe0,aRStack_40);
  FUN_05476c50(aRStack_40);
  FUN_05476c50(awStack_48);
  nop();
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

