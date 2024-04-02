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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd77fdbd5, "usb_get_from_anchor" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4c1d009, "usb_enable_autosuspend" },
	{ 0xe7b58ca2, "btbcm_set_bdaddr" },
	{ 0x546c0bf9, "btbcm_setup_patchram" },
	{ 0x1a217af9, "btbcm_setup_apple" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x8e525aba, "usb_match_id" },
	{ 0x34584d81, "hci_register_dev" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0xb2a8f38f, "btrtl_setup_realtek" },
	{ 0xd924aae1, "btintel_set_diag" },
	{ 0x38d622d1, "btintel_hw_error" },
	{ 0xb6858acb, "btintel_set_bdaddr" },
	{ 0x672a2ae0, "btintel_set_diag_mfg" },
	{ 0xf3ff96ef, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xa336c8ca, "hci_recv_diag" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x54eefcc5, "btintel_set_event_mask" },
	{ 0x1883adbb, "btintel_load_ddc_config" },
	{ 0x195ea0ee, "btintel_send_intel_reset" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1995cb7e, "btintel_download_firmware" },
	{ 0x19147a03, "btintel_read_boot_params" },
	{ 0x8edb0d78, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1b0519d6, "device_wakeup_enable" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xcdebca32, "hci_recv_frame" },
	{ 0x7a2f20dc, "btintel_check_bdaddr" },
	{ 0x825780d2, "btintel_set_event_mask_mfg" },
	{ 0x1cc5f42, "btintel_exit_mfg" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3fbcc315, "__hci_cmd_sync_ev" },
	{ 0xd82fb958, "btintel_enter_mfg" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x28318305, "snprintf" },
	{ 0xd7442057, "bt_info" },
	{ 0x6e0f2629, "btintel_read_version" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x4f87a64c, "device_wakeup_disable" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6b3a6c0f, "__hci_cmd_sync" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x962eeb53, "hci_free_dev" },
	{ 0xe10f17e, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x47022514, "bt_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btbcm,bluetooth,btrtl,btintel";

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6D4103C4BA98DE055F1515F");
MODULE_INFO(rhelversion, "8.0");
