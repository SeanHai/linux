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
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe3146d85, "isac_irq" },
	{ 0x2db7d3d2, "isacsx_irq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x5def83f9, "skb_push" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x677412db, "sev_enable_key" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x27e1a049, "printk" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0x4c0d73c2, "pnp_activate_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x727307da, "isac_setup" },
	{ 0xab509c61, "isacsx_setup" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5eba9410, "__request_region" },
	{ 0xb98fd27b, "isac_init" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee93522c, "hisax_register" },
	{ 0x3f3b323a, "isac_d_l2l1" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xf678b11f, "pnp_disable_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f4f2ce, "hisax_unregister" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hisax_isac,hisax";

MODULE_ALIAS("pnp:dAVM0900*");
MODULE_ALIAS("acpi*:AVM0900:*");
MODULE_ALIAS("pci:v00001244d00000A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001244d00000E00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D867EEDB54AF4475395B32B");
MODULE_INFO(rhelversion, "8.0");
