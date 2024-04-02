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
	{ 0x5def83f9, "skb_push" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa622d224, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x27e1a049, "printk" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x3dc1e6f6, "netdev_printk" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001077d00003022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00003032sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "52D57FE705C0B2AC8891C48");
MODULE_INFO(rhelversion, "8.0");
