#include "ViewControllers/SpeecilTweaksViewController.hpp"
using namespace SpeecilTweaks::UI::ViewControllers;
using namespace SpeecilTweaks::UI;

#include "MainConfig.hpp"
#include "bsml/shared/BSML.hpp"
#include "assets.hpp"
#include "GlobalNamespace/MenuTransitionsHelper.hpp"

using namespace UnityEngine;
using namespace GlobalNamespace;

DEFINE_TYPE(SpeecilTweaks::UI::ViewControllers, SpeecilTweaksUI);

namespace SpeecilTweaks::UI
{

    void SpeecilTweaksUI::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)
    {
        if (!firstActivation)
            return;

        BSML::parse_and_construct(IncludedAssets::settings_bsml, this->get_transform(), this);
    }

    Color SpeecilTweaksUI::get_PMenuColour() { return getMainConfig().PMenuColour.GetValue(); }
    void SpeecilTweaksUI::set_PMenuColour(Color value) { getMainConfig().PMenuColour.SetValue(value); }

    Color SpeecilTweaksUI::get_MenuButtonColour() { return getMainConfig().MenuButtonColour.GetValue(); }
    void SpeecilTweaksUI::set_MenuButtonColour(Color value) { getMainConfig().MenuButtonColour.SetValue(value); }

    Color SpeecilTweaksUI::get_rBackColour() { return getMainConfig().rBackColour.GetValue(); }
    void SpeecilTweaksUI::set_rBackColour(Color value) { getMainConfig().rBackColour.SetValue(value); }

    Color SpeecilTweaksUI::get_rfBackColour() { return getMainConfig().rfBackColour.GetValue(); }
    void SpeecilTweaksUI::set_rfBackColour(Color value) { getMainConfig().rfBackColour.SetValue(value); }

    StringW SpeecilTweaksUI::get_aText() { return getMainConfig().aText.GetValue(); }
    void SpeecilTweaksUI::set_aText(StringW value)
    {
        value->ToString();
        getMainConfig().aText.SetValue(value);
    }

    StringW SpeecilTweaksUI::get_pText() { return getMainConfig().pText.GetValue(); }
    void SpeecilTweaksUI::set_pText(StringW value)
    {
        value->ToString();
        getMainConfig().pText.SetValue(value);
    }

    StringW SpeecilTweaksUI::get_rfText() { return getMainConfig().rfText.GetValue(); }
    void SpeecilTweaksUI::set_rfText(StringW value)
    {
        value->ToString();
        getMainConfig().rfText.SetValue(value);
    }

    StringW SpeecilTweaksUI::get_rText() { return getMainConfig().rText.GetValue(); }
    void SpeecilTweaksUI::set_rText(StringW value)
    {
        value->ToString();
        getMainConfig().rText.SetValue(value);
    }

    bool SpeecilTweaksUI::get_EnablePlayButton() { return getMainConfig().EnablePlayButton.GetValue(); }
    void SpeecilTweaksUI::set_EnablePlayButton(bool value) { getMainConfig().EnablePlayButton.SetValue(value); }

    bool SpeecilTweaksUI::get_EnablePracticeButton() { return getMainConfig().EnablePracticeButton.GetValue(); }
    void SpeecilTweaksUI::set_EnablePracticeButton(bool value) { getMainConfig().EnablePracticeButton.SetValue(value); }

    bool SpeecilTweaksUI::get_DisableAllDebris() { return getMainConfig().DisableAllDebris.GetValue(); }
    void SpeecilTweaksUI::set_DisableAllDebris(bool value) { getMainConfig().DisableAllDebris.SetValue(value); }

    bool SpeecilTweaksUI::get_DisableBlur() { return getMainConfig().DisableBlur.GetValue(); }
    void SpeecilTweaksUI::set_DisableBlur(bool value) { getMainConfig().DisableBlur.SetValue(value); }

    bool SpeecilTweaksUI::get_EnablePMenuTweaks() { return getMainConfig().EnablePMenuTweaks.GetValue(); }
    void SpeecilTweaksUI::set_EnablePMenuTweaks(bool value) { getMainConfig().EnablePMenuTweaks.SetValue(value); }
}