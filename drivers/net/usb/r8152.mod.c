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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x7757626e, "work_busy" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0x77e23d0, "__skb_gso_segment" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4892a57, "usb_autopm_put_interface_async" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x8d47cfd6, "usb_autopm_get_interface_async" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0xe3b56a33, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x37500af1, "hex2bin" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x199ac3d5, "usb_driver_set_configuration" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x5eb49f1a, "netdev_notice" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x55e5dd81, "usb_queue_reset_device" },
	{ 0x28318305, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x509f625d, "consume_skb" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "7C64E0DF9173407B75D9F19");
MODULE_INFO(rhelversion, "8.0");
