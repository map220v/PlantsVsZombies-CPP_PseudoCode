// Class: NewPVPTutorialInfo


/* NewPVPTutorialInfo::~NewPVPTutorialInfo() */

void __thiscall NewPVPTutorialInfo::~NewPVPTutorialInfo(NewPVPTutorialInfo *this)

{
  std::vector<NewPVPTutorialPlantInfo,std::allocator<NewPVPTutorialPlantInfo>>::~vector
            ((vector<NewPVPTutorialPlantInfo,std::allocator<NewPVPTutorialPlantInfo>> *)(this + 8));
  return;
}


/* NewPVPTutorialInfo::TEMPNAMEPLACEHOLDERVALUE(NewPVPTutorialInfo const&) */

NewPVPTutorialInfo * __thiscall
NewPVPTutorialInfo::operator=(NewPVPTutorialInfo *this,NewPVPTutorialInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<NewPVPTutorialPlantInfo,std::allocator<NewPVPTutorialPlantInfo>>::operator=
            ((vector<NewPVPTutorialPlantInfo,std::allocator<NewPVPTutorialPlantInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

