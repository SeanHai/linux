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
	{ 0x314ffb6c, "snd_hdac_power_up" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbf4d250, "snd_hda_gen_free" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x1f98347e, "snd_hda_mixer_amp_volume_put" },
	{ 0x9bd77ade, "snd_hda_codec_eapd_power_filter" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0x9138fd91, "snd_hda_gen_parse_auto_config" },
	{ 0xc0861160, "snd_hda_add_verbs" },
	{ 0x85e5434f, "snd_hda_apply_fixup" },
	{ 0xfe1860b5, "snd_hda_pick_fixup" },
	{ 0xb01baf5f, "snd_hda_input_mux_put" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x33017b0c, "snd_hda_mixer_amp_tlv" },
	{ 0xc07def35, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x485fc32a, "snd_hda_codec_set_pincfg" },
	{ 0x6c0242c4, "snd_hda_mixer_amp_switch_put" },
	{ 0xbf815c75, "snd_hda_gen_update_outputs" },
	{ 0x27253169, "snd_hda_jack_detect_enable_callback" },
	{ 0xfb27b5dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xa8c57f5d, "snd_hdac_regmap_write_raw" },
	{ 0x9d8d66ee, "_snd_hda_set_pin_ctl" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x44518d9, "snd_hda_gen_fix_pin_power" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x88bdc366, "snd_hda_mixer_amp_switch_get" },
	{ 0xf572398f, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc283038a, "snd_hda_gen_path_power_filter" },
	{ 0xa8f9b878, "is_jack_detectable" },
	{ 0xcfdc801d, "snd_hda_gen_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd0c7e746, "snd_hda_override_amp_caps" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x7f9552e1, "snd_hda_get_int_hint" },
	{ 0x48812696, "snd_hda_jack_detect_state" },
	{ 0x37ed24e4, "snd_hda_jack_tbl_get" },
	{ 0xf572c733, "snd_hda_get_bool_hint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0xe5314ef8, "snd_hda_add_imux_item" },
	{ 0xa4b9df18, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xeaef69a1, "snd_hda_enable_beep_device" },
	{ 0x2dba58b7, "snd_hda_gen_add_kctl" },
	{ 0x75b3cf47, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xe7b0c875, "snd_hda_codec_get_pincfg" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe7ba2461, "snd_hda_apply_pincfgs" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x6aa7c02c, "snd_hda_mixer_amp_switch_info" },
	{ 0x8d6a6d3f, "snd_hdac_power_down" },
	{ 0x25329b3b, "snd_hda_gen_spec_init" },
	{ 0x193db696, "snd_hda_mixer_amp_volume_info" },
	{ 0x72bb1910, "query_amp_caps" },
	{ 0x3f5b7c3, "snd_hda_codec_amp_init_stereo" },
	{ 0xdd071875, "snd_hda_gen_build_controls" },
	{ 0xa00d1d95, "snd_hda_get_connections" },
	{ 0x42e7fd0b, "snd_hda_shutup_pins" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v83847690r*a01*");
MODULE_ALIAS("hdaudio:v83847882r*a01*");
MODULE_ALIAS("hdaudio:v83847680r*a01*");
MODULE_ALIAS("hdaudio:v83847880r*a01*");
MODULE_ALIAS("hdaudio:v83847681r*a01*");
MODULE_ALIAS("hdaudio:v83847682r*a01*");
MODULE_ALIAS("hdaudio:v83847683r*a01*");
MODULE_ALIAS("hdaudio:v83847618r*a01*");
MODULE_ALIAS("hdaudio:v83847619r*a01*");
MODULE_ALIAS("hdaudio:v83847638r*a01*");
MODULE_ALIAS("hdaudio:v83847616r*a01*");
MODULE_ALIAS("hdaudio:v83847617r*a01*");
MODULE_ALIAS("hdaudio:v83847614r*a01*");
MODULE_ALIAS("hdaudio:v83847615r*a01*");
MODULE_ALIAS("hdaudio:v83847620r*a01*");
MODULE_ALIAS("hdaudio:v83847621r*a01*");
MODULE_ALIAS("hdaudio:v83847622r*a01*");
MODULE_ALIAS("hdaudio:v83847623r*a01*");
MODULE_ALIAS("hdaudio:v83847624r*a01*");
MODULE_ALIAS("hdaudio:v83847625r*a01*");
MODULE_ALIAS("hdaudio:v83847626r*a01*");
MODULE_ALIAS("hdaudio:v83847627r*a01*");
MODULE_ALIAS("hdaudio:v83847628r*a01*");
MODULE_ALIAS("hdaudio:v83847629r*a01*");
MODULE_ALIAS("hdaudio:v83847632r*a01*");
MODULE_ALIAS("hdaudio:v83847633r*a01*");
MODULE_ALIAS("hdaudio:v83847634r*a01*");
MODULE_ALIAS("hdaudio:v83847635r*a01*");
MODULE_ALIAS("hdaudio:v83847636r*a01*");
MODULE_ALIAS("hdaudio:v83847637r*a01*");
MODULE_ALIAS("hdaudio:v83847645r*a01*");
MODULE_ALIAS("hdaudio:v83847646r*a01*");
MODULE_ALIAS("hdaudio:v83847661r*a01*");
MODULE_ALIAS("hdaudio:v83847662r*a01*");
MODULE_ALIAS("hdaudio:v83847664r*a01*");
MODULE_ALIAS("hdaudio:v83847698r*a01*");
MODULE_ALIAS("hdaudio:v838476A0r*a01*");
MODULE_ALIAS("hdaudio:v838476A1r*a01*");
MODULE_ALIAS("hdaudio:v838476A2r*a01*");
MODULE_ALIAS("hdaudio:v838476A3r*a01*");
MODULE_ALIAS("hdaudio:v838476A4r*a01*");
MODULE_ALIAS("hdaudio:v838476A5r*a01*");
MODULE_ALIAS("hdaudio:v838476A6r*a01*");
MODULE_ALIAS("hdaudio:v838476A7r*a01*");
MODULE_ALIAS("hdaudio:v111D7603r*a01*");
MODULE_ALIAS("hdaudio:v111D7604r*a01*");
MODULE_ALIAS("hdaudio:v111D76D4r*a01*");
MODULE_ALIAS("hdaudio:v111D7605r*a01*");
MODULE_ALIAS("hdaudio:v111D76D5r*a01*");
MODULE_ALIAS("hdaudio:v111D76D1r*a01*");
MODULE_ALIAS("hdaudio:v111D76D9r*a01*");
MODULE_ALIAS("hdaudio:v111D7666r*a01*");
MODULE_ALIAS("hdaudio:v111D7667r*a01*");
MODULE_ALIAS("hdaudio:v111D7668r*a01*");
MODULE_ALIAS("hdaudio:v111D7669r*a01*");
MODULE_ALIAS("hdaudio:v111D7608r*a01*");
MODULE_ALIAS("hdaudio:v111D7674r*a01*");
MODULE_ALIAS("hdaudio:v111D7675r*a01*");
MODULE_ALIAS("hdaudio:v111D7676r*a01*");
MODULE_ALIAS("hdaudio:v111D7695r*a01*");
MODULE_ALIAS("hdaudio:v111D76B0r*a01*");
MODULE_ALIAS("hdaudio:v111D76B1r*a01*");
MODULE_ALIAS("hdaudio:v111D76B2r*a01*");
MODULE_ALIAS("hdaudio:v111D76B3r*a01*");
MODULE_ALIAS("hdaudio:v111D76B4r*a01*");
MODULE_ALIAS("hdaudio:v111D76B5r*a01*");
MODULE_ALIAS("hdaudio:v111D76B6r*a01*");
MODULE_ALIAS("hdaudio:v111D76B7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C0r*a01*");
MODULE_ALIAS("hdaudio:v111D76C1r*a01*");
MODULE_ALIAS("hdaudio:v111D76C2r*a01*");
MODULE_ALIAS("hdaudio:v111D76C3r*a01*");
MODULE_ALIAS("hdaudio:v111D76C4r*a01*");
MODULE_ALIAS("hdaudio:v111D76C5r*a01*");
MODULE_ALIAS("hdaudio:v111D76C6r*a01*");
MODULE_ALIAS("hdaudio:v111D76C7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C8r*a01*");
MODULE_ALIAS("hdaudio:v111D76C9r*a01*");
MODULE_ALIAS("hdaudio:v111D76CAr*a01*");
MODULE_ALIAS("hdaudio:v111D76CBr*a01*");
MODULE_ALIAS("hdaudio:v111D76CCr*a01*");
MODULE_ALIAS("hdaudio:v111D76CDr*a01*");
MODULE_ALIAS("hdaudio:v111D76CEr*a01*");
MODULE_ALIAS("hdaudio:v111D76DFr*a01*");
MODULE_ALIAS("hdaudio:v111D76E0r*a01*");
MODULE_ALIAS("hdaudio:v111D76E3r*a01*");
MODULE_ALIAS("hdaudio:v111D76E5r*a01*");
MODULE_ALIAS("hdaudio:v111D76E7r*a01*");
MODULE_ALIAS("hdaudio:v111D76E8r*a01*");
MODULE_ALIAS("hdaudio:v111D76E9r*a01*");
MODULE_ALIAS("hdaudio:v111D76EAr*a01*");
MODULE_ALIAS("hdaudio:v111D76EBr*a01*");
MODULE_ALIAS("hdaudio:v111D76ECr*a01*");
MODULE_ALIAS("hdaudio:v111D76EDr*a01*");
MODULE_ALIAS("hdaudio:v111D76EEr*a01*");
MODULE_ALIAS("hdaudio:v111D76EFr*a01*");
MODULE_ALIAS("hdaudio:v111D76F0r*a01*");
MODULE_ALIAS("hdaudio:v111D76F1r*a01*");
MODULE_ALIAS("hdaudio:v111D76F2r*a01*");
MODULE_ALIAS("hdaudio:v111D76F3r*a01*");

MODULE_INFO(srcversion, "89FB31851A15A090D747D09");
MODULE_INFO(rhelversion, "8.0");
