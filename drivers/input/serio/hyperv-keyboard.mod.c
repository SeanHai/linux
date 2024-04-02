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
	{ 0x7da4a994, "vmbus_driver_unregister" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x1358df84, "__serio_register_port" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x29361773, "complete" },
	{ 0x34c28e23, "pm_wakeup_dev_event" },
	{ 0xbb786aaf, "serio_interrupt" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x79a5d6a, "vmbus_recvpacket_raw" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0xdcc5fb23, "serio_unregister_port" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:6dad12f9172bea48bd65f927a61c7684");

MODULE_INFO(srcversion, "5CB1B0BAAE8F3D07158A7F5");
MODULE_INFO(rhelversion, "8.0");
