// Class: WorldLevelPackageRewardDetailWidgetFactory


/* WorldLevelPackageRewardDetailWidgetFactory::CreateWidget(int) */

WorldLevelPackageRewardDetailPlant *
WorldLevelPackageRewardDetailWidgetFactory::CreateWidget(int param_1)

{
  WorldLevelPackageRewardDetailPlant *this;
  WorldLevelPackageRewardDetailWidget *this_00;
  
  if (param_1 != 0x5a64) {
    this = ::operator_new(0xf0);
    WorldLevelPackageRewardDetailPlant::WorldLevelPackageRewardDetailPlant(this,param_1);
    return this;
  }
  this_00 = ::operator_new(0xf0);
  WorldLevelPackageRewardDetailWidget::WorldLevelPackageRewardDetailWidget(this_00,0x5a64);
  return (WorldLevelPackageRewardDetailPlant *)this_00;
}

