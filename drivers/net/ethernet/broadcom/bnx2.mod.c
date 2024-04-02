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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xe98d105f, "build_skb" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x91715312, "sprintf" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x754d539c, "strlen" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xfb578fc5, "memset" },
	{ 0x509f625d, "consume_skb" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0xa622d224, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x28318305, "snprintf" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xe914e41e, "strcpy" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf9a482f9, "msleep" },
	{ 0x27e1a049, "printk" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003101bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003106bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv0000103Csd00003102bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001639sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "16DF8C9A7FD7CCE1DEC3988");
MODULE_INFO(rhelversion, "8.0");
