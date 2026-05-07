// Class: EventUIConfig


/* EventUIConfig::EventUIConfig() */

void __thiscall EventUIConfig::EventUIConfig(EventUIConfig *this)

{
  InvitationPlayerInfo::InvitationPlayerInfo((InvitationPlayerInfo *)(this + 8));
  *(undefined4 *)this = 0;
  return;
}


/* EventUIConfig::~EventUIConfig() */

void __thiscall EventUIConfig::~EventUIConfig(EventUIConfig *this)

{
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 8));
  return;
}


/* EventUIConfig::TEMPNAMEPLACEHOLDERVALUE(EventUIConfig const&) */

EventUIConfig * __thiscall EventUIConfig::operator=(EventUIConfig *this,EventUIConfig *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  InvitationPlayerInfo::operator=
            ((InvitationPlayerInfo *)(this + 8),(InvitationPlayerInfo *)(param_1 + 8));
  return this;
}


/* EventUIConfig::EventUIConfig(EventUIConfig const&) */

void __thiscall EventUIConfig::EventUIConfig(EventUIConfig *this,EventUIConfig *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)(this + 8),(InvitationPlayerInfo *)(param_1 + 8));
  return;
}


/* EventUIConfig::EventUIConfig(EventUIConfig&&) */

void __thiscall EventUIConfig::EventUIConfig(EventUIConfig *this,EventUIConfig *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)(this + 8),(InvitationPlayerInfo *)(param_1 + 8));
  return;
}

