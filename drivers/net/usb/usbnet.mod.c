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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xd77fdbd5, "usb_get_from_anchor" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf04de715, "usb_get_urb" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x3604b5df, "usb_string" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x4892a57, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0x4bf28362, "mii_ethtool_set_link_ksettings" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x8d47cfd6, "usb_autopm_get_interface_async" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x37500af1, "hex2bin" },
	{ 0xcf3d88a6, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0xfd51f909, "usb_autopm_get_interface_no_resume" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x89539790, "mii_link_ok" },
	{ 0x509f625d, "consume_skb" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";


MODULE_INFO(srcversion, "6796639CE9130CA6D783966");
MODULE_INFO(rhelversion, "8.0");
