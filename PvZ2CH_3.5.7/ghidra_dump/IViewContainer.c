// Class: IViewContainer


/* IViewContainer::IViewContainer() */

void __thiscall IViewContainer::IViewContainer(IViewContainer *this)

{
  *(undefined **)this = &DAT_06981ac0;
  return;
}


/* IViewContainer::CreateViewContainerManager() */

AndroidViewContainerMgr * IViewContainer::CreateViewContainerManager(void)

{
  AndroidViewContainerMgr *this;
  
  this = ::operator_new(0x18);
  AndroidViewContainerMgr::AndroidViewContainerMgr(this);
  return this;
}

