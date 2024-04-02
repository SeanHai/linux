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
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x6bddef80, "misc_register" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xa916b694, "strnlen" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3A9F1268E9C08D4CEEC6E06");
MODULE_INFO(rhelversion, "8.0");
