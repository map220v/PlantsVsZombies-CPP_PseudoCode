// Class: RenaissanceChallengeScrollNew


/* RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew() */

void __thiscall
RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew(RenaissanceChallengeScrollNew *this)

{
  *(undefined ***)this = &PTR_GetClass_067146b0;
  *(undefined ***)(this + 0xd8) = &PTR__RenaissanceChallengeScrollNew_06714a68;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UIScrollWidgetComponent::~UIScrollWidgetComponent((UIScrollWidgetComponent *)this);
  return;
}


/* non-virtual thunk to RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew() */

void __thiscall
RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew(RenaissanceChallengeScrollNew *this)

{
  ~RenaissanceChallengeScrollNew(this + -0xd8);
  return;
}


/* RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew() */

void __thiscall
RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew(RenaissanceChallengeScrollNew *this)

{
  ~RenaissanceChallengeScrollNew(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew() */

void __thiscall
RenaissanceChallengeScrollNew::~RenaissanceChallengeScrollNew(RenaissanceChallengeScrollNew *this)

{
  ~RenaissanceChallengeScrollNew(this + -0xd8);
  return;
}


/* RenaissanceChallengeScrollNew::RenaissanceChallengeScrollNew() */

void __thiscall
RenaissanceChallengeScrollNew::RenaissanceChallengeScrollNew(RenaissanceChallengeScrollNew *this)

{
  UIScrollWidgetComponent::UIScrollWidgetComponent((UIScrollWidgetComponent *)this);
  *(undefined ***)this = &PTR_GetClass_067146b0;
  *(undefined ***)(this + 0xd8) = &PTR__RenaissanceChallengeScrollNew_06714a68;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeScrollNew::InitView() */

void __thiscall RenaissanceChallengeScrollNew::InitView(RenaissanceChallengeScrollNew *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *pTVar6;
  char *__s;
  RenaissanceChallengeActivityWidgetNew *this_02;
  undefined8 *puVar7;
  size_t in_x2;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 local_190 [12];
  RenaissanceChallengeActivityData aRStack_160 [24];
  undefined8 local_148;
  undefined8 local_140;
  TGAAnniversaryTreasureData aTStack_128 [16];
  undefined1 auStack_118 [64];
  string asStack_d8 [80];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  this[0x59] = (RenaissanceChallengeScrollNew)0x0;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03aac1c4(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    RenaissanceChallengeActivityData::RenaissanceChallengeActivityData(aRStack_160);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aRStack_160);
    if (cVar1 != '\0') {
      uVar8 = 0;
      lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
      uVar9 = local_148;
      lVar4 = FUN_03aac1f0(local_148,local_140);
      if (lVar4 != 0) {
        do {
          lVar4 = FUN_03aac220(uVar9,uVar8);
          lVar4 = TimeUtil::FormatTimeToTimeStamp(*(int *)(lVar4 + 8));
          if (lVar3 <= lVar4) {
            this_02 = ::operator_new(0x168);
            RenaissanceChallengeActivityWidgetNew::RenaissanceChallengeActivityWidgetNew(this_02);
            (**(code **)(*(long *)this + 0x370))(this,this_02);
            puVar7 = (undefined8 *)FUN_03aac220(local_148,uVar8);
            in_x2 = (size_t)*(uint *)(puVar7 + 1);
            RenaissanceChallengeActivityWidgetNew::LoadData
                      (this_02,*puVar7,in_x2,uVar8 & 0xffffffff);
          }
          uVar9 = local_148;
          uVar8 = uVar8 + 1;
          uVar5 = FUN_03aac1f0(local_148,local_140);
        } while (uVar8 < uVar5);
      }
      UIScrollWidgetComponent::SetScrollParam((UIScrollWidgetComponent *)this);
      UIScrollWidgetComponent::SetDotEnable((UIScrollWidgetComponent *)this,true);
      UIScrollWidgetComponent::InitView((UIScrollWidgetComponent *)this);
      TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_128);
      std::string::append((string *)aTStack_128,"1",in_x2);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      local_190[0] = PlayerInfo::GetMaterialNum(this_01,DAT_06a884dc);
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_190);
      FUN_05474278(auStack_118,asStack_d8);
      std::string::~string(asStack_d8);
      pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                ((TGAAnniversaryTreasureData *)asStack_d8,aTStack_128);
      TGALogMgr::LogFoolChallenge(pTVar6,asStack_d8);
      TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                ((TGAAnniversaryTreasureData *)asStack_d8);
      TGASecretStore::TGASecretStore((TGASecretStore *)local_190);
      DString::DString((DString *)asStack_d8,1);
      __s = (char *)DString::c_str((DString *)asStack_d8);
      std::string::append((string *)local_190,__s,in_x2);
      DString::~DString((DString *)asStack_d8);
      pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_d8,(TGASecretStore *)local_190);
      TGALogMgr::LogRenaissanceChallenge(pTVar6,asStack_d8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_d8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)local_190);
      TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_128);
    }
    RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData(aRStack_160);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

