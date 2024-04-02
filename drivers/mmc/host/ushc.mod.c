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
	{ 0xf9c388e5, "dev_err" },
	{ 0xb73a2f0d, "mmc_add_host" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xb25e30a0, "mmc_alloc_host" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xf570d6aa, "mmc_detect_change" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xab7505cc, "mmc_request_done" },
	{ 0x944b609, "mmc_remove_host" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x31c71421, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("usb:v0A12p5D10d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B9CF6AC1D1EAAF4145DE4F4");
MODULE_INFO(rhelversion, "8.0");
