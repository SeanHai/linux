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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xa3294ca4, "usb_lock_device_for_reset" },
	{ 0x9881549, "blk_queue_dma_alignment" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2B50FEFE17CDD9FDFAE4FF1");
MODULE_INFO(rhelversion, "8.0");
