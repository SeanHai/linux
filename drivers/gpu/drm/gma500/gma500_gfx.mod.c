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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x99689236, "drm_release" },
	{ 0xd67c0b3c, "drm_fb_helper_set_par" },
	{ 0xb2ff9374, "drm_fb_helper_ioctl" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x1b5581f, "drm_crtc_helper_set_config" },
	{ 0x894ad67a, "drm_compat_ioctl" },
	{ 0xea2b701b, "up_read" },
	{ 0xa9318a3e, "drm_helper_resume_force_mode" },
	{ 0xb31c08de, "drm_gem_put_pages" },
	{ 0xc4b397e9, "drm_get_edid" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x310209b7, "drm_fb_helper_cfb_fillrect" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xbbe63234, "drm_fb_helper_initial_config" },
	{ 0x5b1f6ffd, "release_resource" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xa8a4661f, "pci_unmap_rom" },
	{ 0x1e67eae8, "drm_mode_config_cleanup" },
	{ 0xef8acd7d, "drm_format_info" },
	{ 0xcfaff9bf, "drm_mode_config_reset" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xa936eadd, "drm_mode_destroy" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf61c3df0, "drm_property_create_range" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x3812a9c2, "drm_fb_helper_debug_leave" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf0eb808a, "drm_helper_probe_single_connector_modes" },
	{ 0xc3c5de95, "drm_crtc_vblank_off" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc09b30be, "drm_gem_free_mmap_offset" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x999e8297, "vfree" },
	{ 0xfc9331c9, "pm_runtime_allow" },
	{ 0x47aa81b1, "drm_vblank_init" },
	{ 0xa4eed4ff, "set_pages_array_wc" },
	{ 0x8c2d601b, "drm_encoder_init" },
	{ 0x74b9a534, "drm_object_property_set_value" },
	{ 0x7a23ce6d, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3a5ded62, "allocate_resource" },
	{ 0x66551bc7, "drm_detect_monitor_audio" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34c44bea, "drm_connector_cleanup" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x91185511, "down_read" },
	{ 0x53688a1, "drm_fb_helper_unregister_fbi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x149fa7ec, "drm_fb_helper_pan_display" },
	{ 0xce310c0e, "drm_handle_vblank" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x84b76159, "drm_helper_connector_dpms" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x1a1bc984, "drm_mode_connector_attach_encoder" },
	{ 0x2d691beb, "drm_irq_install" },
	{ 0x3e79329e, "drm_fb_helper_cfb_copyarea" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0xab7744ee, "drm_mode_set_name" },
	{ 0x409efaff, "drm_helper_mode_fill_fb_struct" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe92eb648, "drm_object_attach_property" },
	{ 0x622aae5b, "drm_mode_duplicate" },
	{ 0x84a2eb94, "drm_put_dev" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0x1163a2b9, "drm_gem_handle_create" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xb4d1333b, "pci_map_rom" },
	{ 0xea3478a2, "drm_gem_object_put_unlocked" },
	{ 0x2fd55eb3, "drm_fb_helper_fill_var" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0xf5ca5eaf, "drm_gem_object_release" },
	{ 0x574e0172, "drm_read" },
	{ 0xd74ee6ec, "drm_add_edid_modes" },
	{ 0xeae95803, "drm_property_add_enum" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x1dd71f7a, "drm_err" },
	{ 0xf91b59ed, "drm_connector_init" },
	{ 0x19a52461, "drm_fb_helper_prepare" },
	{ 0xb4f16985, "drm_gem_vm_open" },
	{ 0x7399d63b, "drm_mode_connector_update_edid_property" },
	{ 0xef095286, "drm_gem_vm_close" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3e858e1, "drm_helper_crtc_in_use" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x13ec4289, "drm_mode_set_crtcinfo" },
	{ 0x17c9ae4, "drm_ioctl" },
	{ 0x59858188, "drm_fb_helper_output_poll_changed" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd738fb4e, "drm_gem_mmap" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7182f52b, "set_pages_array_wb" },
	{ 0xf7da314, "i2c_add_numbered_adapter" },
	{ 0xb0d37b8d, "drm_mode_create_scaling_mode_property" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0x431bc498, "drm_framebuffer_unregister_private" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x89a0514e, "drm_fb_helper_check_var" },
	{ 0xf55c7691, "drm_gem_private_object_init" },
	{ 0xa6548be5, "drm_object_property_get_value" },
	{ 0x8386939, "drm_fb_helper_blank" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xeedd4c41, "drm_get_pci_dev" },
	{ 0xeb903b5c, "drm_crtc_helper_set_mode" },
	{ 0xd47b642b, "drm_mode_debug_printmodeline" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x401b648d, "set_pages_wb" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xa1995a5e, "drm_gem_object_lookup" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xbe580b94, "drm_fb_helper_alloc_fbi" },
	{ 0xa8ad5d01, "drm_detect_hdmi_monitor" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfacc03d, "drm_crtc_init" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3c347407, "drm_connector_unregister" },
	{ 0x349f1d8f, "drm_gem_object_init" },
	{ 0x510811ba, "drm_encoder_cleanup" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x25e39502, "vm_insert_mixed" },
	{ 0xb1bde2ac, "drm_crtc_cleanup" },
	{ 0x509878e7, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x95f93da2, "drm_helper_hpd_irq_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x452a75c3, "drm_fb_helper_cfb_imageblit" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x8ef01e02, "set_pages_uc" },
	{ 0xf2bf1b51, "drm_fb_helper_fini" },
	{ 0x50df118b, "drm_modeset_lock_all" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0x81d2c2be, "drm_mode_probed_add" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x9c25e734, "drm_modeset_unlock_all" },
	{ 0xd2e0cac7, "drm_helper_disable_unused_functions" },
	{ 0x3f056754, "drm_fb_helper_setcmap" },
	{ 0x1967db98, "drm_property_create" },
	{ 0xd6428660, "drm_fb_helper_lastclose" },
	{ 0xc33c7d16, "drm_framebuffer_init" },
	{ 0x209f5f48, "drm_kms_helper_poll_init" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x852a25b3, "i2c_get_adapter" },
	{ 0xc734d451, "drm_gem_get_pages" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x1260dd1d, "drm_fb_helper_fill_fix" },
	{ 0x8d7ba67b, "drm_connector_register" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x66ad3cc0, "drm_mode_crtc_set_gamma_size" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x6a6a0fb3, "drm_fb_helper_debug_enter" },
	{ 0x36521709, "drm_poll" },
	{ 0x112f1802, "drm_fb_helper_init" },
	{ 0xe484e35f, "ioread32" },
	{ 0x9f0375fb, "drm_fb_helper_single_add_all_connectors" },
	{ 0x845371ab, "vm_insert_pfn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce166b33, "drm_open" },
	{ 0xbf8bb7a1, "drm_kms_helper_poll_fini" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x305d9edc, "drm_framebuffer_cleanup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,video,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00008108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6DFA24BB30952675AFF9CDB");
MODULE_INFO(rhelversion, "8.0");
