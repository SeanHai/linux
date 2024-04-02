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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x4403fcf, "unregister_capi_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9f823278, "register_capi_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x349cba85, "strchr" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x32608e68, "attach_capi_ctr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xee1ddc92, "b1dma_proc_show" },
	{ 0xc09dc0dd, "b1dma_reset_ctr" },
	{ 0x23a9db83, "b1dma_load_firmware" },
	{ 0x924c1a5f, "b1dma_send_message" },
	{ 0xeb94e991, "b1dma_release_appl" },
	{ 0x26ac30aa, "b1dma_register_appl" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd6f9f1ea, "b1dma_interrupt" },
	{ 0x9c022472, "t1pci_detect" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0x43f1a1e3, "avmcard_dma_alloc" },
	{ 0x32623162, "b1_alloc_card" },
	{ 0x27e1a049, "printk" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x91715312, "sprintf" },
	{ 0x55c74181, "b1_free_card" },
	{ 0x94f876b0, "avmcard_dma_free" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7523c54e, "detach_capi_ctr" },
	{ 0xa4fd1b2e, "b1dma_reset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1dma,b1";

MODULE_ALIAS("pci:v00001244d00001200sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BFDC1D004A87971F6B9D89B");
MODULE_INFO(rhelversion, "8.0");
