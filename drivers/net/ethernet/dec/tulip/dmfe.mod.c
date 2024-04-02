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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x8dc974cb, "dev_trans_start" },
	{ 0x318f7969, "add_timer" },
	{ 0xf10de535, "ioread8" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x509f625d, "consume_skb" },
	{ 0xc5534d64, "ioread16" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe484e35f, "ioread32" },
	{ 0x27e1a049, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001282d00009132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001282d00009102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001282d00009100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001282d00009009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3300DC8E8B709C1863C82C8");
MODULE_INFO(rhelversion, "8.0");
