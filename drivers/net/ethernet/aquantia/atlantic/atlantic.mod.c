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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xa622d224, "dev_close" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x67981391, "dev_open" },
	{ 0xe98d105f, "build_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x77201499, "skb_add_rx_frag" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x28318305, "snprintf" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001D6Ad00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000000B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000007B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000008B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000009B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000011B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000012B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000080B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000087B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000088B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000089B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000091B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000092B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000051B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000052B1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "609FD32BEF25B29E8971FEA");
MODULE_INFO(rhelversion, "8.0");
