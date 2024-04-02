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
	{ 0x7da4a994, "vmbus_driver_unregister" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x82b1cf66, "register_framebuffer" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0x37b8b39e, "screen_info" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x85df9b6c, "strsep" },
	{ 0xab781570, "fb_get_options" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3a15e14b, "vmbus_allocate_mmio" },
	{ 0x9d284533, "efi" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x631760d1, "framebuffer_alloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62ef4465, "vmbus_recvpacket" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7ab497c8, "cfb_fillrect" },
	{ 0xfbb38466, "cfb_copyarea" },
	{ 0x33f56f00, "cfb_imageblit" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0x95a7b42f, "framebuffer_release" },
	{ 0x31e2e77f, "vmbus_free_mmio" },
	{ 0xedc03953, "iounmap" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xb4cb9948, "unregister_framebuffer" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:02780ada77e3ac4a8e770558eb1073f8");
MODULE_ALIAS("pci:v00001414d00005353sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "8985F1BE52A6F37C4D38D6B");
MODULE_INFO(rhelversion, "8.0");
