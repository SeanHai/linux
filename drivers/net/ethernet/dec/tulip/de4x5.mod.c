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
	{ 0x103b0514, "param_ops_charp" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x91715312, "sprintf" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x5eba9410, "__request_region" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x509f625d, "consume_skb" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x27e1a049, "printk" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D0CDA6DCC3E714118624953");
MODULE_INFO(rhelversion, "8.0");
