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
	{ 0x38a7735c, "netdev_info" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xb8cec420, "pcie_set_readrq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xc4082c9b, "netdev_alert" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x5a921311, "strncmp" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa622d224, "dev_close" },
	{ 0x3dc1e6f6, "netdev_printk" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xe0a07210, "napi_get_frags" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x509f625d, "consume_skb" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xe88455d3, "napi_gro_frags" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x6c9ff8a8, "netdev_crit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001077d00008012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1A79175F936F3F10CD92FE");
MODULE_INFO(rhelversion, "8.0");
