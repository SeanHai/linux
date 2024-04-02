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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbf4d250, "snd_hda_gen_free" },
	{ 0x1f98347e, "snd_hda_mixer_amp_volume_put" },
	{ 0x3951e901, "snd_hda_enum_helper_info" },
	{ 0x9138fd91, "snd_hda_gen_parse_auto_config" },
	{ 0x85e5434f, "snd_hda_apply_fixup" },
	{ 0xfe1860b5, "snd_hda_pick_fixup" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x33017b0c, "snd_hda_mixer_amp_tlv" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc07def35, "snd_hda_gen_build_pcms" },
	{ 0xaac7c645, "snd_hda_override_conn_list" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x3fb14c53, "snd_hda_get_path_from_idx" },
	{ 0xfb27b5dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xa8c57f5d, "snd_hdac_regmap_write_raw" },
	{ 0x474635dc, "snd_hda_get_path_idx" },
	{ 0x3593461c, "snd_hda_gen_check_power_status" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x29657620, "snd_hda_activate_path" },
	{ 0xcfdc801d, "snd_hda_gen_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd0c7e746, "snd_hda_override_amp_caps" },
	{ 0x4ee6efe0, "snd_hda_ctl_add" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0xa4b9df18, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x2dba58b7, "snd_hda_gen_add_kctl" },
	{ 0x75b3cf47, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x6aa7c02c, "snd_hda_mixer_amp_switch_info" },
	{ 0x25329b3b, "snd_hda_gen_spec_init" },
	{ 0x193db696, "snd_hda_mixer_amp_volume_info" },
	{ 0xdd071875, "snd_hda_gen_build_controls" },
	{ 0xa00d1d95, "snd_hda_get_connections" },
	{ 0x42e7fd0b, "snd_hda_shutup_pins" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v11D4184Ar*a01*");
MODULE_ALIAS("hdaudio:v11D41882r*a01*");
MODULE_ALIAS("hdaudio:v11D41883r*a01*");
MODULE_ALIAS("hdaudio:v11D41884r*a01*");
MODULE_ALIAS("hdaudio:v11D4194Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4194Br*a01*");
MODULE_ALIAS("hdaudio:v11D41981r*a01*");
MODULE_ALIAS("hdaudio:v11D41983r*a01*");
MODULE_ALIAS("hdaudio:v11D41984r*a01*");
MODULE_ALIAS("hdaudio:v11D41986r*a01*");
MODULE_ALIAS("hdaudio:v11D41988r*a01*");
MODULE_ALIAS("hdaudio:v11D4198Br*a01*");
MODULE_ALIAS("hdaudio:v11D4882Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Br*a01*");

MODULE_INFO(srcversion, "A74B2B09B3AAA81BB9DC1D8");
MODULE_INFO(rhelversion, "8.0");
