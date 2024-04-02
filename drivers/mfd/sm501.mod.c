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
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x5b1f6ffd, "release_resource" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x1d4e2af4, "gpiod_add_lookup_table" },
	{ 0x91715312, "sprintf" },
	{ 0xa95765cf, "gpiochip_remove" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x110781ef, "gpiochip_add_data_with_key" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3d4d9e00, "gpiochip_get_data" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xe6478472, "_dev_info" },
	{ 0x593216c9, "platform_device_register" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x3fa74627, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000126Fd00000501sv*sd*bc*sc*i*");
MODULE_ALIAS("of:N*T*Csmi,sm501");
MODULE_ALIAS("of:N*T*Csmi,sm501C*");

MODULE_INFO(srcversion, "DD32F25C473C292218257B1");
MODULE_INFO(rhelversion, "8.0");
