// Class: Sexy::ProfileManager


/* Sexy::ProfileManager::GetListener() */

undefined8 __thiscall Sexy::ProfileManager::GetListener(ProfileManager *this)

{
  return *(undefined8 *)(this + 8);
}


/* Sexy::ProfileManager::Update() */

void Sexy::ProfileManager::Update(void)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x18))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::GetNumProfiles() */

void Sexy::ProfileManager::GetNumProfiles(void)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x20))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::GetProfile(int) */

void Sexy::ProfileManager::GetProfile(int param_1)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x28))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::GetProfile(std::wstring const&) */

void Sexy::ProfileManager::GetProfile(wstring *param_1)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x30))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::GetAnyProfile() */

void Sexy::ProfileManager::GetAnyProfile(void)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x38))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::ClearProfiles() */

void Sexy::ProfileManager::ClearProfiles(void)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x58))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::AddProfile(std::wstring const&) */

void Sexy::ProfileManager::AddProfile(wstring *param_1)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x40))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::DeleteProfile(std::wstring const&) */

void Sexy::ProfileManager::DeleteProfile(wstring *param_1)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x48))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::RenameProfile(std::wstring const&, std::wstring const&) */

void Sexy::ProfileManager::RenameProfile(wstring *param_1,wstring *param_2)

{
  (**(code **)(**(long **)(gSexyAppBase + 0x38) + 0x50))(*(long **)(gSexyAppBase + 0x38));
  return;
}


/* Sexy::ProfileManager::ProfileManager(Sexy::ProfileEventListener*) */

void __thiscall
Sexy::ProfileManager::ProfileManager(ProfileManager *this,ProfileEventListener *param_1)

{
  *(ProfileEventListener **)(this + 8) = param_1;
  *(undefined ***)this = &PTR_nop_06a370d0;
  return;
}


/* Sexy::ProfileManager::GetProfileVersion() */

void __thiscall Sexy::ProfileManager::GetProfileVersion(ProfileManager *this)

{
  if (*(code **)**(undefined8 **)(this + 8) == ProfileEventListener::GetProfileVersion) {
    ProfileEventListener::GetProfileVersion();
    return;
  }
  (**(code **)**(undefined8 **)(this + 8))();
  return;
}


/* Sexy::ProfileManager::CreateUserProfile() */

void __thiscall Sexy::ProfileManager::CreateUserProfile(ProfileManager *this)

{
  (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8));
  return;
}

