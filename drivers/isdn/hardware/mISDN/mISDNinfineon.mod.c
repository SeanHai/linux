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
	{ 0x123130e4, "param_get_uint" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xeb9b6c85, "mISDNipac_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5eeee198, "mISDN_register_device" },
	{ 0x89f035eb, "mISDNipac_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x28318305, "snprintf" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x1497ce1b, "mISDN_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x677412db, "sev_enable_key" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x6dbad168, "param_set_uint" },
	{ 0x27e1a049, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDNipac,mISDN_core";

MODULE_ALIAS("pci:v00001133d0000E002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv00000053sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv00000052sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001267d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv00000871sd0000FFA8bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001187sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7BF54DBE98E027198856BC3");
MODULE_INFO(rhelversion, "8.0");
