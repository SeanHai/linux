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
	{ 0xf9a482f9, "msleep" },
	{ 0xbf4d250, "snd_hda_gen_free" },
	{ 0x2fba9c80, "snd_hda_codec_get_pin_target" },
	{ 0x1f98347e, "snd_hda_mixer_amp_volume_put" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0x9138fd91, "snd_hda_gen_parse_auto_config" },
	{ 0x85e5434f, "snd_hda_apply_fixup" },
	{ 0xc0861160, "snd_hda_add_verbs" },
	{ 0xfe1860b5, "snd_hda_pick_fixup" },
	{ 0xcf01a3e7, "snd_pci_quirk_lookup" },
	{ 0x33017b0c, "snd_hda_mixer_amp_tlv" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc07def35, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0xaac7c645, "snd_hda_override_conn_list" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x485fc32a, "snd_hda_codec_set_pincfg" },
	{ 0x6c0242c4, "snd_hda_mixer_amp_switch_put" },
	{ 0xbf815c75, "snd_hda_gen_update_outputs" },
	{ 0x27253169, "snd_hda_jack_detect_enable_callback" },
	{ 0xfe7843b, "input_event" },
	{ 0xfb27b5dc, "snd_hda_mixer_amp_volume_get" },
	{ 0xb3399306, "snd_hda_codec_set_name" },
	{ 0xa8c57f5d, "snd_hdac_regmap_write_raw" },
	{ 0x9d8d66ee, "_snd_hda_set_pin_ctl" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9eceaaef, "snd_hda_gen_hp_automute" },
	{ 0x3593461c, "snd_hda_gen_check_power_status" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe8d7aaa9, "snd_hda_codec_set_pin_target" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x88bdc366, "snd_hda_mixer_amp_switch_get" },
	{ 0x46436fc7, "snd_hda_codec_set_power_to_all" },
	{ 0x164f080c, "snd_hdac_power_down_pm" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc283038a, "snd_hda_gen_path_power_filter" },
	{ 0xcfdc801d, "snd_hda_gen_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x4c1e4601, "snd_hda_jack_set_gating_jack" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd0c7e746, "snd_hda_override_amp_caps" },
	{ 0x48812696, "snd_hda_jack_detect_state" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x2609b020, "snd_hda_find_mixer_ctl" },
	{ 0xf89ffe4d, "snd_hda_sequence_write" },
	{ 0xf572c733, "snd_hda_get_bool_hint" },
	{ 0x4ee6efe0, "snd_hda_ctl_add" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdcb31683, "snd_hdac_override_parm" },
	{ 0x4289de8b, "snd_hda_pick_pin_fixup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x4c4aad24, "_snd_hdac_read_parm" },
	{ 0xa4b9df18, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x75b3cf47, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xe7b0c875, "snd_hda_codec_get_pincfg" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe7ba2461, "snd_hda_apply_pincfgs" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x6aa7c02c, "snd_hda_mixer_amp_switch_info" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x25329b3b, "snd_hda_gen_spec_init" },
	{ 0x193db696, "snd_hda_mixer_amp_volume_info" },
	{ 0x72bb1910, "query_amp_caps" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0xdd071875, "snd_hda_gen_build_controls" },
	{ 0x14aa6182, "snd_hdac_power_up_pm" },
	{ 0x49bd4584, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x42e7fd0b, "snd_hda_shutup_pins" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");

MODULE_INFO(srcversion, "08A5D44F7C0561776A3F781");
MODULE_INFO(rhelversion, "8.0");
