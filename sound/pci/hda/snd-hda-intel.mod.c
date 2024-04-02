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
	{ 0xf5b942, "snd_hdac_i915_set_bclk" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x38ce402b, "azx_interrupt" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x58a1b98b, "param_get_int" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x2f1e8924, "snd_hda_lock_devices" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x8a871790, "snd_hdac_i915_exit" },
	{ 0xa3a32e23, "snd_hdac_bus_alloc_stream_pages" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b2d7194, "snd_hdac_set_codec_wakeup" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x4f98ef52, "azx_codec_configure" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xcf01a3e7, "snd_pci_quirk_lookup" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0xa4eed4ff, "set_pages_array_wc" },
	{ 0xb9ff77a, "param_set_int" },
	{ 0x7268c39e, "snd_hdac_bus_parse_capabilities" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x7163e82b, "azx_stop_chip" },
	{ 0xfd23f8ef, "snd_hda_set_power_save" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x50e5885e, "vga_switcheroo_register_audio_client" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbd1fa941, "vga_switcheroo_unregister_client" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x438ae20d, "snd_hdac_display_power" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x62621c7e, "bpf_trace_run1" },
	{ 0xf52a34f5, "azx_init_chip" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe3a31c36, "snd_hda_load_patch" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x70b60725, "azx_free_streams" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0xa9053948, "azx_bus_init" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0xb649ff45, "azx_get_pos_posbuf" },
	{ 0x71a014ad, "snd_pcm_lib_free_pages" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0x3942b05c, "snd_hda_unlock_devices" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x438f9d6e, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x5da4c106, "param_ops_bint" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x194a2078, "snd_hdac_i915_init" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7182f52b, "set_pages_array_wb" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92c878b0, "pci_intx" },
	{ 0xc983b4e8, "azx_get_pos_lpib" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x24fdc108, "snd_hdac_bus_exit" },
	{ 0x845709db, "snd_hdac_bus_free_stream_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0x6e08dad1, "azx_stop_all_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x7a2dd494, "azx_init_streams" },
	{ 0xba63db57, "snd_card_free" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x621d7e9b, "azx_probe_codecs" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x76208b91, "snd_hdac_bus_enter_link_reset" },
	{ 0xf1c7a3fd, "vga_switcheroo_get_client_state" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec,snd-pcm,snd";

MODULE_ALIAS("pci:v00008086d00001C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000811Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000080Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002284sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000284Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A3Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A6Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001002d0000437Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000793Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007919sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000960Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000970Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAD8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAF0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005461sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00006549d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00006549d00002200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00005011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015ADd00001977sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc04sc03i00*");

MODULE_INFO(srcversion, "40FFD0A2EEA598636D43489");
MODULE_INFO(rhelversion, "8.0");
