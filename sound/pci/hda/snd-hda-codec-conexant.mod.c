#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbf4d250, "snd_hda_gen_free" },
	{ 0x2fba9c80, "snd_hda_codec_get_pin_target" },
	{ 0x1f98347e, "snd_hda_mixer_amp_volume_put" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x9138fd91, "snd_hda_gen_parse_auto_config" },
	{ 0xc0861160, "snd_hda_add_verbs" },
	{ 0x85e5434f, "snd_hda_apply_fixup" },
	{ 0xfe1860b5, "snd_hda_pick_fixup" },
	{ 0x33017b0c, "snd_hda_mixer_amp_tlv" },
	{ 0xc07def35, "snd_hda_gen_build_pcms" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xbf815c75, "snd_hda_gen_update_outputs" },
	{ 0x3fb14c53, "snd_hda_get_path_from_idx" },
	{ 0xfb27b5dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xa8c57f5d, "snd_hdac_regmap_write_raw" },
	{ 0x3593461c, "snd_hda_gen_check_power_status" },
	{ 0xe8d7aaa9, "snd_hda_codec_set_pin_target" },
	{ 0x46436fc7, "snd_hda_codec_set_power_to_all" },
	{ 0xf572398f, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x29657620, "snd_hda_activate_path" },
	{ 0xcfdc801d, "snd_hda_gen_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x4c1e4601, "snd_hda_jack_set_gating_jack" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd0c7e746, "snd_hda_override_amp_caps" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x48812696, "snd_hda_jack_detect_state" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4ee6efe0, "snd_hda_ctl_add" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0xa4b9df18, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x75b3cf47, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0x6fed29be, "snd_hda_add_new_path" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x6aa7c02c, "snd_hda_mixer_amp_switch_info" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x25329b3b, "snd_hda_gen_spec_init" },
	{ 0x92b5c801, "snd_hdac_regmap_read_raw" },
	{ 0x193db696, "snd_hda_mixer_amp_volume_info" },
	{ 0x72bb1910, "query_amp_caps" },
	{ 0xf4b601a4, "snd_hda_gen_mic_autoswitch" },
	{ 0xdd071875, "snd_hda_gen_build_controls" },
	{ 0x49bd4584, "snd_hda_add_new_ctls" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");

MODULE_INFO(srcversion, "DB00A105BB4CECBC45D8C06");
MODULE_INFO(rhelversion, "8.0");
