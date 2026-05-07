// Class: UIInvitationRecordItem


/* UIInvitationRecordItem::~UIInvitationRecordItem() */

void __thiscall UIInvitationRecordItem::~UIInvitationRecordItem(UIInvitationRecordItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069e4540;
  Sexy::PACommand::~PACommand((PACommand *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIInvitationRecordItem::~UIInvitationRecordItem() */

void __thiscall UIInvitationRecordItem::~UIInvitationRecordItem(UIInvitationRecordItem *this)

{
  ~UIInvitationRecordItem(this);
  AK::FreeHook(this);
  return;
}


/* UIInvitationRecordItem::UIInvitationRecordItem() */

void __thiscall UIInvitationRecordItem::UIInvitationRecordItem(UIInvitationRecordItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069e4540;
  Set8BytesTo0(this + 0xd8);
  std::pair<std::string,std::string>::pair((pair<std::string,std::string> *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationRecordItem::InitView(recordData const&) */

void __thiscall UIInvitationRecordItem::InitView(UIInvitationRecordItem *this,recordData *param_1)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  recordData::operator=((recordData *)(this + 0xe0),param_1);
  FUN_05475d88(asStack_10,param_1 + 8);
  for (lVar1 = FUN_054743b0(asStack_10,0x2d,0); lVar1 != -1;
      lVar1 = FUN_054743b0(asStack_10,0x2d,lVar1 + 1)) {
    FUN_05476368(asStack_10,lVar1,1,&DAT_055a4690);
  }
  lVar1 = FUN_054743b0(asStack_10,0x20,0);
  if (lVar1 != -1) {
    FUN_0547500c(asStack_10,lVar1,0xffffffffffffffff);
  }
  thunk_FUN_05475e00(this + 0xd8,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationRecordItem::Draw(Sexy::Graphics*) */

void __thiscall UIInvitationRecordItem::Draw(UIInvitationRecordItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  string *extraout_x1;
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9fce0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  Sexy::UTF8StringToWString((Sexy *)(this + 0xe0),extraout_x1);
  iVar1 = FUN_04e67c24(10);
  iVar2 = FUN_04e67c24(0x96);
  iVar3 = FUN_04e67c24(0x28);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar1,iVar2,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_28,-0x99c900);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aCStack_28,0,1);
  FUN_05476c50(auStack_30);
  Sexy::ToWString((string *)(this + 0xd8));
  iVar1 = FUN_04e67c24(0xe6);
  iVar2 = FUN_04e67c24(0xd);
  iVar3 = FUN_04e67c24(100);
  iVar4 = FUN_04e67c24(0x28);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Color::Color(aCStack_28,-0x99c900);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aCStack_28,1,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

