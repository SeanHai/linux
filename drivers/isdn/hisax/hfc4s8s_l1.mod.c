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
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xee93522c, "hisax_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x5eba9410, "__request_region" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7f4f2ce, "hisax_unregister" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x509f625d, "consume_skb" },
	{ 0x27e1a049, "printk" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hisax";

MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd000008B4bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd000016B8bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B520bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B522bc*sc*i*");

MODULE_INFO(srcversion, "5C582B91AE16926CEF9E9AC");
MODULE_INFO(rhelversion, "8.0");
