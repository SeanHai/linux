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
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xb8cec420, "pcie_set_readrq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbf18e27, "pcie_get_readrq" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x121da905, "queue_work_on" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio";

MODULE_ALIAS("pci:v00001969d00001091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E0B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3E12771459ADECE65788FFC");
MODULE_INFO(rhelversion, "8.0");
