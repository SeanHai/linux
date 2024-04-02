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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x27e1a049, "printk" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x509f625d, "consume_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xa622d224, "dev_close" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x91715312, "sprintf" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x28318305, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0xf9a482f9, "msleep" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe6478472, "_dev_info" },
	{ 0xfb578fc5, "memset" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3dc1e6f6, "netdev_printk" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x2f1be53f, "pci_pme_capable" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001148d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004342sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004355sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004356sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000435Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004364sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004366sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004367sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004370sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004382sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E4625AD34CE20D957EDE542");
MODULE_INFO(rhelversion, "8.0");
