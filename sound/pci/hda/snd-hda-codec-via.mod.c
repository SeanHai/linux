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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbf4d250, "snd_hda_gen_free" },
	{ 0x1f98347e, "snd_hda_mixer_amp_volume_put" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0x3951e901, "snd_hda_enum_helper_info" },
	{ 0x9138fd91, "snd_hda_gen_parse_auto_config" },
	{ 0x85e5434f, "snd_hda_apply_fixup" },
	{ 0xfe1860b5, "snd_hda_pick_fixup" },
	{ 0x33017b0c, "snd_hda_mixer_amp_tlv" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xc07def35, "snd_hda_gen_build_pcms" },
	{ 0xaac7c645, "snd_hda_override_conn_list" },
	{ 0x9342a799, "snd_hda_check_amp_list_power" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x485fc32a, "snd_hda_codec_set_pincfg" },
	{ 0x6c0242c4, "snd_hda_mixer_amp_switch_put" },
	{ 0xfb27b5dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xb3399306, "snd_hda_codec_set_name" },
	{ 0x88bdc366, "snd_hda_mixer_amp_switch_get" },
	{ 0xcfdc801d, "snd_hda_gen_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd0c7e746, "snd_hda_override_amp_caps" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0xf89ffe4d, "snd_hda_sequence_write" },
	{ 0xf572c733, "snd_hda_get_bool_hint" },
	{ 0x4ee6efe0, "snd_hda_ctl_add" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0xa4b9df18, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x75b3cf47, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xe7b0c875, "snd_hda_codec_get_pincfg" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x6aa7c02c, "snd_hda_mixer_amp_switch_info" },
	{ 0x25329b3b, "snd_hda_gen_spec_init" },
	{ 0x92b5c801, "snd_hdac_regmap_read_raw" },
	{ 0x193db696, "snd_hda_mixer_amp_volume_info" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0xdd071875, "snd_hda_gen_build_controls" },
	{ 0xa00d1d95, "snd_hda_get_connections" },
	{ 0x49bd4584, "snd_hda_add_new_ctls" },
	{ 0x42e7fd0b, "snd_hda_shutup_pins" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");

MODULE_INFO(srcversion, "BA61D359EBF655B6DFDB2D9");
MODULE_INFO(rhelversion, "8.0");
