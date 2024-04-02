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
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x1c6ec503, "__napi_schedule_irqoff" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x3ae9232c, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x9b79a4f0, "napi_hash_del" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0xe94f64e1, "__hw_addr_sync_dev" },
	{ 0xbe1babdf, "flow_get_u32_src" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x29f9517f, "rps_may_expire_flow" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc2fb064b, "flow_keys_dissector" },
	{ 0x51f66e03, "netif_set_xps_queue" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x525c1ee, "zalloc_cpumask_var" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xa622d224, "dev_close" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x50c60211, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0x67981391, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x6cfa9591, "__hw_addr_unsync_dev" },
	{ 0xe6478472, "_dev_info" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x2af66623, "flow_get_u32_dst" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x509f625d, "consume_skb" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0xa063d0db, "pci_find_ext_capability" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001137d00000043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001137d00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001137d00000071sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E0AC06CB7293F0D81A0CAEF");
MODULE_INFO(rhelversion, "8.0");
