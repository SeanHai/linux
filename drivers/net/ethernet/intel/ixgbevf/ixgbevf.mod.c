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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xa41beb0, "napi_consume_skb" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x1c6ec503, "__napi_schedule_irqoff" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe068f686, "xdp_rxq_info_reg" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xee8b874e, "xdp_rxq_info_unreg" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb34cb469, "ipv6_find_hdr" },
	{ 0x91715312, "sprintf" },
	{ 0x4790fce4, "__page_frag_cache_drain" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe98d105f, "build_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe0a4e6ce, "eth_get_headlen" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x77201499, "skb_add_rx_frag" },
	{ 0xedc03953, "iounmap" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x509f625d, "consume_skb" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xdd5fc59d, "bpf_prog_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0x97183961, "dev_get_stats" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xdc34a927, "__tracepoint_xdp_exception" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000010EDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001515sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001565sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "94220DC18658C15C4CAAA1A");
MODULE_INFO(rhelversion, "8.0");
